#include<iostream>
#include<cstdio>
#include<array>
#include<vector>

#include"stl.h"
#include "spdlog/spdlog.h"
// template < class T,size_t n>
// void ar_list(std::array<T, n> const &arr)
// {
//     spdlog::info("printf array start : ");
//     for(auto i : arr){
//         std::cout << i ;
//     }
//     std::cout << "\n";
// }

// int main ()
// {
//     std::array<int ,9> arr{};
//     ar_list(arr);
// }

//  查看extern的作用以及全局变量的作用域
extern uint8_t s1;
void view_extern(){
    std::cout << " extern value is " << std::dec<< s1 << std::endl;
}