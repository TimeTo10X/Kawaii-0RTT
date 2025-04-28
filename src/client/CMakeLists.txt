cmake_minimum_required(VERSION 4.0.1)
project(kawaii_client VERSION 0.1 LANGUAGES CXX)

add_library(kawaii_client
    kawaii_client.h kawaii_client.cpp
)

target_link_libraries(kawaii_client
    PRIVATE
        Qt6::Quick
)
