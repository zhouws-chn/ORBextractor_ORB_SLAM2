# project name
project( unit_test )
# requirement of cmake version
cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "-std=c++11")

# find required opencv
find_package(OpenCV REQUIRED)
# directory of opencv headers
include_directories(${OpenCV_INCLUDE_DIRS})

include_directories( ${PROJECT_SOURCE_DIR})
include_directories( ${PROJECT_SOURCE_DIR}/include)

#指定可执行文件的输出目录，输出到bin下面
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
#指定库文件输出路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

set( THIRD_PARTY_LIBS ${OpenCV_LIBS} )

add_subdirectory( src )
add_subdirectory( test )


