#include "../../include/transaction/smart_contract.h"
#include <iostream>
#include <unordered_map>
#include <mutex>

std::unordered_map<std::string, std::string> executionCache;
std::mutex cacheMutex;

SmartContract::SmartContract(std::string code) {
    contractCode = code;
}

std::string SmartContract::getContractType() {
    if (contractCode.find("EVM") != std::string::npos) {
        return "EVM Smart Contract";
    }
    return "Standard Contract";
}

std::string SmartContract::execute(std::map<std::string, std::string> params) {
    std::string cacheKey = contractCode + params["bytecode"];

    {
        std::lock_guard<std::mutex> lock(cacheMutex);
        if (executionCache.find(cacheKey) != executionCache.end()) {
            return executionCache[cacheKey]; // ✅ Return cached execution result
        }
    }

    std::string result = executeEVM(params["bytecode"]);

    {
        std::lock_guard<std::mutex> lock(cacheMutex);
        executionCache[cacheKey] = result; // ✅ Store execution in cache
    }

    return result; // ✅ Fix: Ensure function always returns a value
}

std::string SmartContract::executeEVM(std::string bytecode) {
    return "EVM Execution Completed: " + bytecode.substr(0, 10) + "..."; // Simulating EVM execution
}
