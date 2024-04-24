#pragma once
#ifndef __STL_H__
#define __STL_H__
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
template < class T,size_t n>
void ar_list(std::array<T, n> const &arr)
{
    spdlog::info("printf array start : ");
    for(auto i : arr){
        std::cout << i ;
    }
    std::cout << "\n";
}

void view_extern();


#endif
#endif // __STL_H__