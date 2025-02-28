#ifndef WALLET_H
#define WALLET_H

#include <string>

class Wallet {
public:
    Wallet();
    std::string generateAddress();
private:
    std::string privateKey;
};

#endif
