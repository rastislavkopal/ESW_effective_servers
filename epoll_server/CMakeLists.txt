cmake_minimum_required(VERSION 3.18)

project(server)

aux_source_directory(. SRC_LIST)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -O3")

find_package(ZLIB REQUIRED)
if(ZLIB_FOUND)
    include_directories(${ZLIB_INCLUDE_DIRS})
endif()

SET(Boost_USE_STATIC_LIBS OFF)
SET(Boost_USE_MULTITHREAD ON)
find_package(PkgConfig REQUIRED)
find_package(Boost 1.42.0 REQUIRED COMPONENTS system thread regex iostreams)
IF(Boost_FOUND)
    INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIRS})
    LINK_DIRECTORIES(${Boost_LIBRARY_DIRS})
ENDIF(Boost_FOUND)

include(FindProtobuf)
find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIR})

SET(USED_LIBS ${Boost_LIBRARIES}  ${ZLIB_LIBRARIES} ${PROTOBUF_LIBRARY} -ltbb)

add_executable(${PROJECT_NAME} ${SRC_LIST} "main.cpp" "schema.pb.h" "schema.pb.cc")
target_link_libraries(${PROJECT_NAME}  ${USED_LIBS})
