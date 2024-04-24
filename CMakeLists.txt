cmake_minimum_required(VERSION 3.10)  # 设定最低版本要求
project(httpProject)              # 定义项目名
option(SPDLOG_BUILD_SHARED "Build shared library" ON)

add_definitions(
		-Wall -g -O3 -ggdb -gdwarf -funwind-tables -rdynamic
		-Wno-unused-parameter -D_GNU_SOURCE
		)

include_directories(${PROJECT_SOURCE_DIR}/src/utils/spdlog/include)
include_directories(${PROJECT_SOURCE_DIR}/src/main)
include_directories(${PROJECT_SOURCE_DIR}/src/template)
include_directories(${PROJECT_SOURCE_DIR}/src/stl)
include_directories(${PROJECT_SOURCE_DIR}/src/cpp)
include_directories(${PROJECT_SOURCE_DIR}/src/object)


aux_source_directory(${PROJECT_SOURCE_DIR}/ SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/stl SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/template SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/main SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/cpp SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/object SRCS)


set(CMAKE_CXX_STANDARD 17)            # 设定 C++ 标准
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加一个可执行文件
add_executable(app ${SRCS})

target_link_libraries(
			app  spdlog pthread
			)
add_subdirectory(${PROJECT_SOURCE_DIR}/src/utils/spdlog)

target_compile_definitions(app PRIVATE SPDLOG_COMPILED_LIB)

# 设置可执行文件的输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/out)
