#ifndef P2P_H
#define P2P_H

#include <vector>
#include <string>

void startP2PServer();
void connectToPeers();
void requestBatchBlocks(int startBlock, int batchSize);

#endif
