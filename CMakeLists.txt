cmake_minimum_required(VERSION 3.0.0)
project(mathc VERSION 0.1.0)

set(MY_INCLUDE_DIRS include)
file(GLOB MY_SOURCE src/*.cpp)

include(CTest)
enable_testing()

include_directories(${MY_INCLUDE_DIRS})

add_executable(mathc.exe ${MY_SOURCE})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
