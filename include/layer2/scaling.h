#ifndef SCALING_H
#define SCALING_H

#include <string>
#include <vector>

class Layer2Scaling {
public:
    Layer2Scaling();
    void executeBatchTransactions(std::vector<std::string> transactions);
    std::string finalizeRollup();
};

#endif
