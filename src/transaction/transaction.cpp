#include "../../include/transaction/transaction.h"
#include <openssl/evp.h>
#include <sstream>

Transaction::Transaction(std::string sender, std::string receiver, double amount, SmartContract contract) 
    : sender(sender), receiver(receiver), amount(amount), contract(contract) {
    txHash = generateHash();
}

std::string Transaction::generateHash() {
    std::stringstream ss;
    ss << sender << receiver << amount << contract.execute({});

    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    const EVP_MD* md = EVP_sha256();
    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int hash_len;

    EVP_DigestInit_ex(ctx, md, nullptr);
    EVP_DigestUpdate(ctx, ss.str().c_str(), ss.str().size());
    EVP_DigestFinal_ex(ctx, hash, &hash_len);
    EVP_MD_CTX_free(ctx);

    std::stringstream hashString;
    for (unsigned int i = 0; i < hash_len; i++)
        hashString << std::hex << (int)hash[i];

    return hashString.str();
}
