#include "../../include/api/explorer.h"
#include <iostream>
#include <pqxx/pqxx>

std::vector<TransactionRecord> getRecentTransactions() {
    std::vector<TransactionRecord> transactions;
    try {
        pqxx::connection conn("dbname=nexadb user=postgres");
        pqxx::work txn(conn);
        pqxx::result res = txn.exec("SELECT txid, sender, receiver, amount FROM transactions ORDER BY timestamp DESC LIMIT 10;");

        for (auto row : res) {
            TransactionRecord tx;
            tx.txid = row[0].c_str();
            tx.sender = row[1].c_str();
            tx.receiver = row[2].c_str();
            tx.amount = row[3].as<double>();
            transactions.push_back(tx);
        }
    } catch (const std::exception &e) {
        std::cerr << "Error fetching transactions: " << e.what() << std::endl;
    }
    return transactions;
}
