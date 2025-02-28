#include "nexa_sdk.h"
#include <iostream>
#include <curl/curl.h>

NexaSDK::NexaSDK(std::string node_url) {
    nodeURL = node_url;
}

std::string NexaSDK::getLatestBlock() {
    return "Latest Block Data"; // Placeholder (Later fetch via API)
}

std::string NexaSDK::getBalance(std::string wallet_address) {
    return "Balance: 100 NEXA"; // Placeholder (Later fetch via API)
}

std::string NexaSDK::sendTransaction(std::string sender, std::string receiver, double amount) {
    return "Transaction Sent: " + sender + " -> " + receiver + " (" + std::to_string(amount) + " NEXA)";
}

std::string NexaSDK::deploySmartContract(std::string contract_code) {
    return "Smart Contract Deployed: " + contract_code;
}

std::string NexaSDK::callSmartContract(std::string contract_id) {
    return "Smart Contract Executed: " + contract_id;
}
