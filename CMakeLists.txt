cmake_minimum_required(VERSION 3.27) # cmake version
project(learnCpp) # project name

set(CMAKE_CXX_STANDARD 23) # c++ version

# find Eigen3
find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})


add_executable(learnCpp main.cpp)
target_link_libraries(learnCpp Eigen3::Eigen)
