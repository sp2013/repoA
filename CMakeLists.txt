# Repo A: CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(RepoA)

# Add submodule Repo B
add_subdirectory(math_operations)

# Create the executable for Repo A
add_executable(main_program main.cpp)

# Link Repo B (math_operations) to the main program
target_link_libraries(main_program PRIVATE math_operations)

# Include Repo B headers
target_include_directories(main_program PRIVATE math_operations/)
