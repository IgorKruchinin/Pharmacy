cmake_minimum_required(VERSION 3.28)
project(Pharmacy)
set (CMAKE_CXX_STANDARD 20)
add_executable(test maintest.cpp)
TARGET_LINK_LIBRARIES(test pharmacy)

