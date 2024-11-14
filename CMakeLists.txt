cmake_minimum_required(VERSION 3.20)

project(SET_PROJECT_NAME)
set(LANGUAGE CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# enable_testing()

include_directories("${PROJECT_SOURCE_DIR}/include")

add_subdirectory(lib/googletest)
add_subdirectory(src)
add_subdirectory(tests)
