cmake_minimum_required(VERSION 3.0)

set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wall -O3")

set(PJNAME main)
project(${PJNAME})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_CURRENT_SOURCE_DIR}/build/)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_CURRENT_SOURCE_DIR}/build/)


file(GLOB src_list_cpp ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)


if (CMAKE_SYSTEM_NAME MATCHES "Emscripten")
    set(target_name ${PJNAME})
    add_executable(${target_name} ${src_list_cpp})
    set_target_properties(${target_name} PROPERTIES LINK_FLAGS "--preload-file ${CMAKE_CURRENT_SOURCE_DIR}/data.json@./data.json -sALLOW_MEMORY_GROWTH ")
    set(CMAKE_EXECUTABLE_SUFFIX ".html")
else()
    add_executable(${PJNAME} ${src_list_cpp})
endif()

# target_link_libraries(bcjh jsoncpp)
# target_link_libraries(bcjh jsonhelper)
# -sNO_DISABLE_EXCEPTION_CATCHING

