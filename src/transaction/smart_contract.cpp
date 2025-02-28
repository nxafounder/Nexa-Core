#include "../../include/transaction/smart_contract.h"
#include <iostream>

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
    if (contractCode == "LOCK UNTIL 2025") {
        return "Funds locked until 2025";
    } else if (getContractType() == "Token Minting") {
        return "Token Minted: " + params["token_name"];
    } else if (getContractType() == "Token Transfer") {
        return "Tokens Transferred from " + params["sender"] + " to " + params["receiver"];
    } else if (getContractType() == "NFT Minting") {
        return "NFT Minted: " + params["nft_name"];
    } else if (getContractType() == "DeFi Contract") {
        return "DeFi Contract Executed: " + params["contract_name"];
    }
    return "Smart Contract Executed Successfully";
}
