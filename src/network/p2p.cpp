#include "../../include/network/p2p.h"
#include <iostream>
#include <vector>

std::vector<std::string> peers = {
    "34.16.165.120:8333",
    "34.84.17.157:8333",
    "34.165.16.249:8333"
};

void connectToPeers() {
    for (const auto& peer : peers) {
        std::cout << "Connecting to: " << peer << std::endl;
    }
}

void startP2PServer() {
    std::cout << "P2P Server started on port 8333..." << std::endl;
}

