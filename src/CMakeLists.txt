cmake_minimum_required(VERSION 3.20)

set(APP_SOURCES example-header.cc)
add_library(${PROJECT_NAME}_obj OBJECT ${APP_SOURCES})

add_executable(${PROJECT_NAME}_app ${APP_SOURCES} main.cc)
set_target_properties(${PROJECT_NAME}_app PROPERTIES
    OUTPUT_NAME ${PROJECT_NAME}
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
