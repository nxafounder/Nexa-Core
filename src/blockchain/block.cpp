#include "block.h"
#include <iostream>
#include <sstream>
#include <ctime>
#include <openssl/sha.h>

Block::Block(int idx, std::string prevHash, std::string blkData) 
    : index(idx), previousHash(prevHash), data(blkData) {
    timestamp = std::time(0);
    nonce = 0;
    hash = calculateHash();
}

std::string Block::calculateHash() {
    std::stringstream ss;
    ss << index << previousHash << data << timestamp << nonce;

    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, ss.str().c_str(), ss.str().size());
    SHA256_Final(hash, &sha256);

    std::stringstream hashString;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++)
        hashString << std::hex << (int)hash[i];

    return hashString.str();
}
