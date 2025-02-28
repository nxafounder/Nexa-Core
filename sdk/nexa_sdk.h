#ifndef NEXA_SDK_H
#define NEXA_SDK_H

#include <string>
#include <vector>

class NexaSDK {
public:
    NexaSDK(std::string node_url);
    std::string getLatestBlock();
    std::string getBalance(std::string wallet_address);
    std::string sendTransaction(std::string sender, std::string receiver, double amount);
    std::string deploySmartContract(std::string contract_code);
    std::string callSmartContract(std::string contract_id);
private:
    std::string nodeURL;
};

#endif
