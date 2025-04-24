cmake_minimum_required(VERSION 4.0.1)
project(kawaii_loader VERSION 0.1 LANGUAGES CXX)

add_library(kawaii_loader
    kawaii_loader.h kawaii_loader.cpp
)

# target_include_directories(kawaii_loader PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(kawaii_loader
    PRIVATE
        Qt6::Quick
)
