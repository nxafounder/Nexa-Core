#include "../../include/api/api_server.h"
#include "../../include/api/explorer.h"
#include "../../include/transaction/transaction.h"
#include "../../include/wallet/wallet.h" // ✅ Fix: Include Wallet class
#include <iostream>
#include <crow.h>

std::unordered_map<std::string, std::chrono::steady_clock::time_point> requestLog;

bool isRateLimited(std::string ip) {
    auto now = std::chrono::steady_clock::now();
    if (requestLog.find(ip) != requestLog.end() && std::chrono::duration_cast<std::chrono::seconds>(now - requestLog[ip]).count() < 1) {
        return true;
    }
    requestLog[ip] = now;
    return false;
}

void startAPIServer() {
    crow::SimpleApp app;

      CROW_ROUTE(app, "/wallet/send")
        .methods("POST"_method)([](const crow::request& req) {
        auto data = crow::json::load(req.body);
        std::string receiver = data["receiver"].s();
        double amount = data["amount"].d();

        Wallet userWallet; // ✅ Fix: Define Wallet object
        userWallet.sendTransaction(receiver, amount);

        return crow::response(crow::json::wvalue({{"status", "Transaction Sent"}})); // ✅ Fix: Correct return type
    });

    std::cout << "Secure API running on port 8080..." << std::endl;
    app.port(8080).multithreaded().run();
}
