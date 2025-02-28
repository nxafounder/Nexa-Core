#include "../../include/api/api_server.h"
#include "../../include/api/explorer.h"
#include "../../include/transaction/transaction.h"
#include "../../include/wallet/wallet.h"
#include <iostream>
#include <crow.h>

void startAPIServer() {
    crow::SimpleApp app;

    // Get Wallet Balance
    CROW_ROUTE(app, "/wallet/balance")
        .methods("GET"_method)([]() {
            Wallet userWallet;
            return crow::json::wvalue({{"balance", userWallet.getBalance()}, {"currency", "NXA"}});
        });

    // Send a transaction
    CROW_ROUTE(app, "/wallet/send")
        .methods("POST"_method)([](const crow::request& req) {
            auto data = crow::json::load(req.body);
            std::string receiver = data["receiver"].s();
            double amount = data["amount"].d();

            Wallet userWallet;
            userWallet.sendTransaction(receiver, amount);
            return crow::json::wvalue({{"status", "Transaction Sent"}, {"currency", "NXA"}});
        });

    std::cout << "Wallet API running on port 8080 with NXA currency..." << std::endl;
    app.port(8080).multithreaded().run();
}
