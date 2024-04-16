cmake_minimum_required(VERSION 3.10)  # 设定最低版本要求
project(httpProject)              # 定义项目名

add_definitions(
		-Wall -g -O3 -ggdb -gdwarf -funwind-tables -rdynamic
		-Wno-unused-parameter -D_GNU_SOURCE
		)
        
include_directories(${PROJECT_SOURCE_DIR}/src/utils/spdlog/include)

aux_source_directory(${PROJECT_SOURCE_DIR}/ SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/utils SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/template SRCS)

set(CMAKE_CXX_STANDARD 11)            # 设定 C++ 标准
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加一个可执行文件
add_executable(app ${SRCS})
