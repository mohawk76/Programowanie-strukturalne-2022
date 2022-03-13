cmake_minimum_required(VERSION 3.15)
project(MyApp)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE my_cpp_list RELATIVE ${CMAKE_SOURCE_DIR} "*.cpp")

set(EXCLUDE_DIR "cmake-build-debug/")
foreach (file_path ${my_cpp_list})
    string(FIND ${file_path} ${EXCLUDE_DIR} EXCLUDE_DIR_FOUND)
    if (NOT ${EXCLUDE_DIR_FOUND} EQUAL -1)
        list(REMOVE_ITEM my_cpp_list ${file_path})
    endif ()
endforeach (file_path)

foreach (file_path ${my_cpp_list})
    string(REPLACE ".cpp" "" new_name ${file_path})
    string(REPLACE "/" "_" new_name ${new_name})
    string(REPLACE " " "_" new_name ${new_name})
    get_filename_component(filename ${new_name} NAME)
    add_executable(${new_name} ${file_path})
endforeach ()