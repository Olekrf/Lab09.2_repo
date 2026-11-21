cmake_minimum_required(VERSION 3.14)
project(lab2_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab2_1
    lab2_1.cpp
    calc.cpp
)

add_executable(lab2_1_z5
    lab2_1.cpp
    calc.cpp
)
target_compile_definitions(lab2_1_z5 PRIVATE Z=5)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(lab2_1_Test
    test.cpp
    calc.cpp
)
target_link_libraries(lab2_1_Test GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(lab2_1_Test)
