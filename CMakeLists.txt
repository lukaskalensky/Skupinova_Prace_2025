#NIGDO SEM DOPICI NIC NEPISTE KURWA 
cmake_minimum_required(VERSION 3.16)
project(Skupinova_Prace_2025)

set(CMAKE_CXX_STANDARD 17)

# Recursively find all main.cpp files in subfolders
file(GLOB_RECURSE MAIN_FILES RELATIVE ${CMAKE_SOURCE_DIR} "*/main.cpp")

foreach(MAIN_FILE IN LISTS MAIN_FILES)
    # Get the folder of the main.cpp
    get_filename_component(PROG_DIR ${MAIN_FILE} DIRECTORY)

    # Collect all .cpp files in that folder (non-recursive)
    file(GLOB SRC "${PROG_DIR}/*.cpp")

    # Replace directory separators to underscore for executable name (optional)
    string(REPLACE "/" "_" EXEC_NAME ${PROG_DIR})

    add_executable(${EXEC_NAME} ${SRC}
            Ukoly_7-11-2025/main.cpp)
endforeach()
