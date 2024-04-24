#!/bin/bash

# 检查是否存在 build 目录，如果不存在则创建并进入
if [ ! -d "build" ]; then
    mkdir build
    cd build
else
    cd build
    # 清理之前生成的构建文件
    rm -rf *
fi
echo "a:make directory is $PWD"
cd ..
# 使用 cmake 生成 Makefile
cmake ./build

echo "b:make directory is $PWD"

# 使用 make 编译程序
make

# 检查 make 是否成功
if [ $? -eq 0 ]; then
    # 如果编译成功，执行生成的可执行文件
    mv "$PWD"/app "$PWD/out"
    cd "$PWD/out"
    ./app
else
    # 如果编译失败，输出错误信息
    echo "Error: Compilation failed."
fi

# 返回到原始目录
cd ..
