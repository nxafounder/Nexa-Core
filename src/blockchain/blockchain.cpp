#include "../../include/blockchain/blockchain.h"
#include <iostream>

Blockchain::Blockchain() {
    chain.push_back(Block(0, "0", "Genesis Block"));
}

void Blockchain::addBlock(std::string data) {
    Block newBlock(chain.size(), chain.back().hash, data);
    chain.push_back(newBlock);
}

void Blockchain::printChain() {
    for (const auto& block : chain) {
        std::cout << "Block " << block.index << "\n";
        std::cout << "Previous Hash: " << block.previousHash << "\n";
        std::cout << "Hash: " << block.hash << "\n";
        std::cout << "Data: " << block.data << "\n\n";
    }
}

