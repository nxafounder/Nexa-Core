#include "blockchain/blockchain.h"
#include "network/p2p.h"

int main() {
    startP2PServer(); // Start P2P networking

    Blockchain nexa;
    nexa.addBlock("Block 1 Data");
    nexa.addBlock("Block 2 Data");

    nexa.printChain();
    return 0;
}
