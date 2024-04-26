#pragma once
#ifndef __FUNC_H__
#define __FUNC_H__
#include<vector>
#include<iostream>
#include<array>
#include"spdlog/spdlog.h"

#ifdef __cplusplus
extern "C" 
{
#endif

#ifdef __cplusplus
}

template <class Func>
void call_twice(Func func){
    spdlog::error("call func first {}",func(2));
    spdlog::error("call func second {}",func(7));
}

void func_main();
#endif
#endif // __FUNC_H__