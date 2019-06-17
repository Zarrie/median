cmake_minimum_required(VERSION 3.5)

project(medianStructure)
add_compile_options(-Wall -Wextra -Wpedantic)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(external/catch)
add_subdirectory(src)
add_subdirectory(tests)

enable_testing()
add_test(NAME medianTests COMMAND tests)
