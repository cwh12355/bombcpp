
#include<iostream>
#include<cstdint>
#include<vector>
#include"feature.h"
#include "spdlog/spdlog.h"

#if __DYNAMIC_I_O__
int i_o(){
    uint32_t x;
    uint32_t z;
    float y;
    spdlog::info("not enter i_o function!!");
    std::cout << "Please input a int number for this :\n";
    std::cin >> x;
    std::cout << "the input number is " << std::dec <<  x << "\n";
    std::cout << "Please input a float for the sceond number :\n";
    std::cin >> y;
    std::cout << "the input number float is " << y << std::endl;

    std::cout << "Please input a hex number \n";
    std::cin >> z;
    std::cout << "the input hex number is " << std::hex << std::showbase << z << std::endl;
    return 0;
    
}
#endif

bool output(std::vector<float> const & attr){
    for(auto const n : {44,99})
    (std::find(attr.begin(),attr.end(),n)) == std::end(attr) \
    ? std::cout <<"attr does not contain " << n <<"\n" \
    : std::cout <<"attr contains " << n << "\n";
    
}
//const 强制转换
int recast_type_cpp(){
    const int a = 100;
    std::vector<int> s {100};
    int * p = (int*)&a;
    std::cout << "origin number is " << std::dec << a << std::endl;
    *p = 99;
    for(auto const n : s)
    (std::find(s.begin(),s.end(),a)) == std::end(s) \
    ? std::cout << "a already cast  " << "after cast value of a is  "<< std::dec <<   a << std::endl \
      : std::cout << "a not force cast successful\n";
    
    return 0;
}

int recast_type_c(){
    const int a = 100;
    int * p = (int*)&a;
    printf("origin number is %d \n",a );
    *p = 99;
    printf("a already cast, after cast value of a is  %d \n",a );
    return 0;
}
// 查看extern的作用以及全局变量的作用域
uint8_t s1 = 124;
void review_extrn_origin(){
    printf("oring extern value in oring files is %d\n",s1);
}
std::vector<float> sum_data_f = {};
void cpp_main(){
#if __DYNAMIC_I_O__
    i_o();
#endif
     output(sum_data_f);
     recast_type_c();
    recast_type_cpp();
    review_extrn_origin();
}