cmake_minimum_required(VERSION 3.0)

set(PJNAME main)
project(${PJNAME})

message(STATUS "operation system is ${CMAKE_SYSTEM_NAME}")

file(GLOB src_list_cpp ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

if (CMAKE_SYSTEM_NAME MATCHES "Emscripten")
    set_target_properties(${target_name} PROPERTIES LINK_FLAGS "--preload-file ${CMAKE_CURRENT_SOURCE_DIR}/data.json@./data.json -sALLOW_MEMORY_GROWTH")
else()
    add_executable(${PJNAME} ${src_list_cpp})
endif()


