cmake_minimum_required(VERSION 3.20)

set(TEST_SOURCES sample.cc)

add_executable(${PROJECT_NAME}_tests ${TEST_SOURCES})
target_link_libraries(${PROJECT_NAME}_tests gtest_main ${PROJECT_NAME}_obj)

add_test(NAME ${PROJECT_NAME}_tests COMMAND ${PROJECT_NAME}_tests)