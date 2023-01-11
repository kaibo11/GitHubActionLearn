cmake_minimum_required(VERSION 3.20)
project(GithubActionLearn)

enable_testing()

include_directories(${CMAKE_CURRENT_LIST_DIR})

add_subdirectory(src)

if(${ENABLE_TEST})
    add_subdirectory(test)
endif()