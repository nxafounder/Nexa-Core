#include "../../include/transaction/smart_contract.h"
#include <iostream>
#include <mutex>

std::unordered_map<std::string, std::string> SmartContract::executionCache;
std::mutex cacheMutex; // Protects shared cache

SmartContract::SmartContract(std::string code) {
    contractCode = code;
}

std::string SmartContract::getContractType() {
    if (contractCode.find("MINT") != std::string::npos) {
        return "Token Minting";
    } else if (contractCode.find("TRANSFER") != std::string::npos) {
        return "Token Transfer";
    } else if (contractCode.find("NFT") != std::string::npos) {
        return "NFT Minting";
    } else if (contractCode.find("DEFI") != std::string::npos) {
        return "DeFi Contract";
    }
    return "Standard Contract";
}

std::string SmartContract::execute(std::map<std::string, std::string> params) {
    std::string cacheKey = contractCode + params["sender"] + params["receiver"];

    {
        std::lock_guard<std::mutex> lock(cacheMutex);
        if (executionCache.find(cacheKey) != executionCache.end()) {
            return executionCache[cacheKey]; // Return cached result
        }
    }

    std::string result;
    if (contractCode == "LOCK UNTIL 2025") {
        result = "Funds locked until 2025";
    } else if (getContractType() == "Token Minting") {
        result = "Token Minted: " + params["token_name"];
    } else if (getContractType() == "Token Transfer") {
        result = "Tokens Transferred from " + params["sender"] + " to " + params["receiver"];
    } else if (getContractType() == "NFT Minting") {
        result = "NFT Minted: " + params["nft_name"];
    } else if (getContractType() == "DeFi Contract") {
        result = "DeFi Contract Executed: " + params["contract_name"];
    } else {
        result = "Smart Contract Executed Successfully";
    }

    {
        std::lock_guard<std::mutex> lock(cacheMutex);
        executionCache[cacheKey] = result; // Store in cache
    }

    return result;
}
