#include "blockchain/blockchain.h"

int main() {
    Blockchain nexa;
    nexa.addBlock("Block 1 Data");
    nexa.addBlock("Block 2 Data");

    nexa.printChain();
    return 0;
}
