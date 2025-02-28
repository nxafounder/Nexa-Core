#include <iostream>  // Fix for std::cout
#include "blockchain/blockchain.h"
#include "wallet/wallet.h"
#include "transaction/transaction.h"  // Fix for missing Transaction class
#include "transaction/smart_contract.h"

int main() {
    Blockchain nexa;
    nexa.addBlock("Block 1 Data");
    nexa.addBlock("Block 2 Data");

    nexa.printChain();

    Wallet userWallet;
    std::string myAddress = userWallet.generateAddress();
    std::cout << "Generated Wallet Address: " << myAddress << std::endl;

    SmartContract contract("LOCK UNTIL 2025");
    Transaction tx(myAddress, "NEXA_RECEIVER_123", 10.5, contract);

    std::cout << "Transaction Sent!" << std::endl;
    std::cout << "Sender: " << myAddress << std::endl;
    std::cout << "Receiver: " << "NEXA_RECEIVER_123" << std::endl;
    std::cout << "Amount: " << 10.5 << " NEXA" << std::endl;
    std::cout << "Transaction Hash: " << tx.txHash << std::endl;
    std::cout << "Smart Contract Result: " << tx.contract.execute({}) << std::endl;

    return 0;
}
