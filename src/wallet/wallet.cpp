#include "../../include/wallet/wallet.h"
#include "../../include/transaction/transaction.h"
#include <iostream>

Wallet::Wallet() {
    privateKey = "random_private_key"; // Temporary key for testing
    balance = 100; // Starting balance for testing
}

std::string Wallet::generateAddress() {
    return "NXA_" + privateKey;
}

void Wallet::sendTransaction(std::string receiver, double amount) {
    if (amount > balance) {
        std::cout << "Error: Insufficient balance\n";
        return;
    }

    SmartContract defaultContract("STANDARD_TRANSFER");
    Transaction newTx(generateAddress(), receiver, amount, defaultContract);

    balance -= amount;

    std::cout << "Transaction Sent!\n";
    std::cout << "Sender: " << generateAddress() << "\n";
    std::cout << "Receiver: " << receiver << "\n";
    std::cout << "Amount: " << amount << " NXA\n";
    std::cout << "Transaction Hash: " << newTx.txHash << "\n";
}
