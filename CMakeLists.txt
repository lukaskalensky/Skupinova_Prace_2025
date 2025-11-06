cmake_minimum_required(VERSION 3.16)
project(Skupinova_Prace_2025)

set(CMAKE_CXX_STANDARD 17)

# Detect all subfolders with main.cpp and create executables automatically
file(GLOB FOLDERS RELATIVE ${CMAKE_SOURCE_DIR} */)

foreach(FOLDER ${FOLDERS})
    if(EXISTS "${CMAKE_SOURCE_DIR}/${FOLDER}/main.cpp")
        file(GLOB SRC "${FOLDER}/*.cpp")
        add_executable(${FOLDER} ${SRC})
    endif()
endforeach()
