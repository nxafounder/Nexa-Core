#ifndef BLOCK_H
#define BLOCK_H

#include <string>

class Block {
public:
    int index;
    std::string previousHash;
    std::string hash;
    std::string data;
    long timestamp;
    int nonce;

    Block(int idx, std::string prevHash, std::string blkData);
    std::string calculateHash();
};

#endif
