cmake_minimum_required(VERSION 3.10)
project(Nexa-Core)

set(CMAKE_CXX_STANDARD 17)

# Ensure CMake includes the header files
include_directories(${CMAKE_SOURCE_DIR}/include)

# Find OpenSSL
find_package(OpenSSL REQUIRED)
include_directories(${OPENSSL_INCLUDE_DIR})

add_executable(nexa-core 
    src/main.cpp
    src/blockchain/blockchain.cpp
    src/blockchain/block.cpp
)

target_link_libraries(nexa-core PRIVATE OpenSSL::SSL OpenSSL::Crypto)
