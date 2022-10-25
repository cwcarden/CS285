cmake_minimum_required(VERSION 3.21)
project(bankAcount)

set(CMAKE_CXX_STANDARD 20)

add_executable(bankAcount main.cpp bankAccount.cpp bankAccount.h)
