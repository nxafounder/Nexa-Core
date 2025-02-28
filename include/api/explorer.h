#ifndef EXPLORER_H
#define EXPLORER_H

#include <string>
#include <vector>

struct TransactionRecord {
    std::string txid;
    std::string sender;
    std::string receiver;
    double amount;
};

std::vector<TransactionRecord> getRecentTransactions();

#endif
