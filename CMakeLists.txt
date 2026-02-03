cmake_minimum_required(VERSION 3.16)
project(cpp_learn)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

aux_source_directory(src SOURCES)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/main.cpp ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

target_link_directories(${PROJECT_NAME} PUBLIC
        ${PROJECT_SOURCE_DIR}/lib
)
