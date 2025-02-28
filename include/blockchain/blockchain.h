#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <vector>
#include "block.h"

class Blockchain {
public:
    std::vector<Block> chain;
    Blockchain();
    void addBlock(std::string data);
    void printChain();
};

#endif
