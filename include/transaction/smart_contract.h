#ifndef SMART_CONTRACT_H
#define SMART_CONTRACT_H

#include <string>
#include <map>

class SmartContract {
public:
    SmartContract(std::string code);
    std::string execute(std::map<std::string, std::string> params);
    std::string getContractType();
    std::string executeEVM(std::string bytecode);
private:
    std::string contractCode;
};

#endif
