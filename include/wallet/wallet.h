#ifndef WALLET_H
#define WALLET_H

#include <string>

class Wallet {
public:
    Wallet();
    std::string generateAddress();
    void sendTransaction(std::string receiver, double amount);
private:
    std::string privateKey;
    double balance;
};

#endif
