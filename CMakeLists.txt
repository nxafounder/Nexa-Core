cmake_minimum_required(VERSION 3.10)
project(Nexa-Core)

set(CMAKE_CXX_STANDARD 17)

# Ensure CMake includes the header files
include_directories(${CMAKE_SOURCE_DIR}/include)

# Find Crow
include_directories(${CMAKE_SOURCE_DIR}/Crow/include)

add_executable(nexa-core 
    src/main.cpp
    src/blockchain/blockchain.cpp
    src/blockchain/block.cpp
    src/transaction/transaction.cpp
    src/transaction/smart_contract.cpp
    src/wallet/wallet.cpp
    src/api/explorer.cpp
    src/api/api_server.cpp
)

target_link_libraries(nexa-core PRIVATE pthread)
