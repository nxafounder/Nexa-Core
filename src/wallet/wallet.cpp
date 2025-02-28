#include "../../include/wallet/wallet.h"
#include <openssl/sha.h>
#include <iostream>
#include <sstream>

Wallet::Wallet() {
    privateKey = "random_private_key";
}

std::string Wallet::generateAddress() {
    std::stringstream ss;
    ss << "NEXA_" << privateKey;
    return ss.str();
}
