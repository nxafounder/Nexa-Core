#include "../../include/network/p2p.h"
#include <iostream>
#include <vector>
#include <thread>
#include <boost/asio.hpp>

using namespace boost::asio;
using ip::tcp;

std::vector<std::string> peers = {
    "34.16.165.120:8333",
    "34.84.17.157:8333",
    "34.165.16.249:8333"
};

void connectToPeers() {
    io_service io;
    for (const auto& peer : peers) {
        try {
            tcp::socket socket(io);
            tcp::resolver resolver(io);
            tcp::resolver::query query(peer, "8333");
            tcp::resolver::iterator endpoint = resolver.resolve(query);
            connect(socket, endpoint);
            std::cout << "Connected to peer: " << peer << std::endl;
        } catch (std::exception& e) {
            std::cout << "Failed to connect to " << peer << ": " << e.what() << std::endl;
        }
    }
}

void startP2PServer() {
    std::cout << "P2P Server started on port 8333..." << std::endl;
    std::thread peerThread(connectToPeers);
    peerThread.detach();
}
