#include "../../include/transaction/smart_contract.h"
#include <iostream>

SmartContract::SmartContract(std::string code) {
    contractCode = code;
}

std::string SmartContract::getContractType() {
    if (contractCode.find("NFT") != std::string::npos) {
        return "NFT Minting";
    } else if (contractCode.find("DEFI") != std::string::npos) {
        return "DeFi Lending";
    } else if (contractCode.find("DAO") != std::string::npos) {
        return "DAO Governance";
    }
    return "Standard Contract";
}

std::string SmartContract::execute(std::map<std::string, std::string> params) {
    if (contractCode == "NFT Mint") {
        return "NFT Minted: " + params["nft_name"];
    } else if (contractCode == "DEFI Lend") {
        return "Loan Issued: " + params["amount"];
    } else if (contractCode == "DAO Vote") {
        return "Vote Recorded for Proposal ID: " + params["proposal_id"];
    }
    return "Smart Contract Executed Successfully";
}
