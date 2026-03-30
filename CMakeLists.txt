cmake_minimum_required(VERSION 3.14)
project(DataStructuresTests)

set(CMAKE_CXX_STANDARD 17)

enable_testing()
find_package(GTest REQUIRED)

include_directories(include)

add_executable(runTests
    tests/test_queue.cpp
    tests/test_heap.cpp
    tests/test_binary_tree.cpp
)

target_link_libraries(runTests GTest::GTest GTest::Main pthread)

add_test(NAME runTests COMMAND runTests)
