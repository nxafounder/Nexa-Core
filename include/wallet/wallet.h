#ifndef WALLET_H
#define WALLET_H

#include <string>

class Wallet {
public:
    Wallet();
    std::string generateAddress();
    void sendTransaction(std::string receiver, double amount);
    std::string encryptPrivateKey();
    std::string decryptPrivateKey(const std::string &encryptedKey);
    std::string generateMnemonic();
    std::string recoverFromMnemonic(const std::string &mnemonic);
    double getBalance();
private:
    std::string privateKey;
    double balance;
};

#endif
