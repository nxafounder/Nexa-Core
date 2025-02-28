#include "../../include/blockchain/block.h"
#include <iostream>
#include <sstream>
#include <ctime>
#include <openssl/evp.h>

Block::Block(int idx, std::string prevHash, std::string blkData) 
    : index(idx), previousHash(prevHash), data(blkData) {
    timestamp = std::time(0);
    nonce = 0;
    hash = calculateHash();
}

std::string Block::calculateHash() {
    std::stringstream ss;
    ss << index << previousHash << data << timestamp << nonce;

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
