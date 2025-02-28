#include "../../include/wallet/wallet.h"
#include "../../include/transaction/transaction.h"
#include <openssl/aes.h>
#include <openssl/rand.h>
#include <iostream>
#include <sstream>
#include <vector>

Wallet::Wallet() {
    privateKey = "random_private_key"; // Temporary key for testing
    balance = 100; // Starting balance for testing
}

std::string Wallet::generateAddress() {
    std::stringstream ss;
    ss << "NEXA_" << privateKey;
    return ss.str();
}

std::string Wallet::generateMnemonic() {
    std::vector<std::string> words = {"apple", "banana", "cherry", "date", "elderberry", "fig",
                                      "grape", "honeydew", "ice", "jackfruit", "kiwi", "lemon"};

    std::stringstream mnemonic;
    for (int i = 0; i < 12; i++) {
        mnemonic << words[rand() % words.size()] << " ";
    }

    return mnemonic.str();
}

std::string Wallet::recoverFromMnemonic(const std::string &mnemonic) {
    return "Recovered Private Key from Mnemonic"; // Placeholder for real key derivation
}

std::string Wallet::encryptPrivateKey() {
    unsigned char key[32];
    unsigned char iv[16];

    RAND_bytes(key, sizeof(key));
    RAND_bytes(iv, sizeof(iv));

    AES_KEY aesKey;
    AES_set_encrypt_key(key, 256, &aesKey);

    std::string encryptedKey = privateKey;
    AES_encrypt((const unsigned char *)privateKey.c_str(), (unsigned char *)&encryptedKey[0], &aesKey);

    return encryptedKey;
}

std::string Wallet::decryptPrivateKey(const std::string &encryptedKey) {
    unsigned char key[32];
    unsigned char iv[16];

    RAND_bytes(key, sizeof(key));
    RAND_bytes(iv, sizeof(iv));

    AES_KEY aesKey;
    AES_set_decrypt_key(key, 256, &aesKey);

    std::string decryptedKey = encryptedKey;
    AES_decrypt((const unsigned char *)encryptedKey.c_str(), (unsigned char *)&decryptedKey[0], &aesKey);

    return decryptedKey;
}
