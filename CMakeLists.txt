cmake_minimum_required(VERSION 3.10)
project(Nexa-Core)

set(CMAKE_CXX_STANDARD 17)

# Ensure CMake includes the header files
include_directories(${CMAKE_SOURCE_DIR}/include)

# Find Boost
find_package(Boost REQUIRED COMPONENTS system thread)
include_directories(${Boost_INCLUDE_DIRS})

# Find OpenSSL
find_package(OpenSSL REQUIRED)
include_directories(${OPENSSL_INCLUDE_DIR})

# Find PostgreSQL C++ Library (pqxx)
find_package(PostgreSQL REQUIRED)
include_directories(${PostgreSQL_INCLUDE_DIRS})

# Find Crow
include_directories(${CMAKE_SOURCE_DIR}/Crow/include)

# Ensure all sources are included
add_executable(nexa-core 
    src/main.cpp
    src/blockchain/blockchain.cpp
    src/blockchain/block.cpp
    src/transaction/transaction.cpp
    src/transaction/smart_contract.cpp
    src/wallet/wallet.cpp
    src/api/explorer.cpp
    src/api/api_server.cpp
    src/network/p2p.cpp
)

# Ensure correct linking of necessary libraries
target_link_libraries(nexa-core PRIVATE pthread ${Boost_LIBRARIES} OpenSSL::SSL OpenSSL::Crypto pqxx pq)
