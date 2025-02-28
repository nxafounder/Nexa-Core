cmake_minimum_required(VERSION 3.10)
project(Nexa-Core)

set(CMAKE_CXX_STANDARD 17)

# Ensure CMake includes the header files
include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(nexa-core 
    src/main.cpp
    src/blockchain/blockchain.cpp
    src/blockchain/block.cpp
)

target_include_directories(nexa-core PRIVATE include)
