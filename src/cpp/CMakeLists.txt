cmake_minimum_required(VERSION 4.0.1)
project(cpp_utils VERSION 0.1 LANGUAGES CXX)

add_library(cpp_utils
    cpp_utils.h cpp_utils.cpp
)

# target_include_directories(kawaii_loader PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(cpp_utils
    PRIVATE
        Qt6::Quick
)
