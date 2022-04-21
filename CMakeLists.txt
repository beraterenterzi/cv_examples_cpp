cmake_minimum_required(VERSION 3.0.0)
project(opencv VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(OpenCV REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable(computer_vision_examples_cpp opencv.cpp)

target_link_libraries( computer_vision_examples_cpp ${OpenCV_LIBS} )


add_library(opencv opencv.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
