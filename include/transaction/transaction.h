#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include "smart_contract.h"

class Transaction {
public:
    std::string sender;
    std::string receiver;
    double amount;
    std::string txHash;
    SmartContract contract;

    Transaction(std::string sender, std::string receiver, double amount, SmartContract contract);
    std::string generateHash();
};

#endif
