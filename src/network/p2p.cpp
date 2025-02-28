#include "../../include/network/p2p.h"
#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <boost/asio.hpp>

using namespace boost::asio;
using ip::tcp;

std::mutex syncMutex;

std::vector<std::string> peers = {
    "34.16.165.120",
    "35.85.201.100",
    "13.58.47.16"
};

void requestBatchBlocks(int startBlock, int batchSize) {
    std::lock_guard<std::mutex> lock(syncMutex);
    for (const auto& peer : peers) {
        try {
            io_service io;
            tcp::socket socket(io);
            tcp::resolver resolver(io);
            tcp::resolver::query query(peer, "8333");
            tcp::resolver::iterator endpoint = resolver.resolve(query);
            connect(socket, endpoint);

            std::string request = "GET_BLOCKS " + std::to_string(startBlock) + " " + std::to_string(batchSize) + "\n";
            socket.send(buffer(request));

            std::cout << "Requested " << batchSize << " blocks from " << peer << std::endl;
        } catch (std::exception& e) {
            std::cout << "Failed to request blocks from " << peer << ": " << e.what() << std::endl;
        }
    }
}

void startP2PServer() {
    std::cout << "P2P Server started on port 8333..." << std::endl;
    std::thread syncThread([]() {
        requestBatchBlocks(0, 10);
    });
    syncThread.detach();
}
