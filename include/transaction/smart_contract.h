#ifndef SMART_CONTRACT_H
#define SMART_CONTRACT_H

#include <string>
#include <map>
#include <unordered_map>

class SmartContract {
public:
    SmartContract(std::string code);
    std::string execute(std::map<std::string, std::string> params);
    std::string getContractType();
private:
    std::string contractCode;
    static std::unordered_map<std::string, std::string> executionCache;
};

#endif
