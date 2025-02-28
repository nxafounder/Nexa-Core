#include "../../include/consensus/pos.h"
#include <openssl/sha.h>

std::string selectValidator(std::vector<std::string> validators) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, std::to_string(time(0)).c_str(), 10);
    SHA256_Final(hash, &sha256);

    return validators[hash[0] % validators.size()];
}
