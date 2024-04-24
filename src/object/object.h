#pragma once
#ifndef __TT_OBJECT__
#define __TT_OBJECT__
#include<vector>
#include<iostream>
#include<array>
#include<cstdint>
#include"spdlog/spdlog.h"
using namespace std;

#ifdef __cplusplus
extern "C" 
{
#endif

#ifdef __cplusplus
}

class Student {
    public:

    void display();
    float bmi() ;
    void setname(char *name);
    void setage(uint8_t age);
    void setwength(float wength);
    void settall(float tall);

    public:
    char *m_name;
    uint8_t m_age;
    float m_wength;
    float m_tall;
    
};

void object_main();

#endif
#endif // __STL_H__