#include "../../include/consensus/pow.h"
#include <iostream>
#include <openssl/evp.h>

void mineBlock(Block& block) {
    int difficulty = 4;
    std::string target = std::string(difficulty, '0');

    while (block.hash.substr(0, difficulty) != target) {
        block.nonce++;
        block.hash = block.calculateHash();
    }

    std::cout << "Mined Block: " << block.hash << std::endl;
}
