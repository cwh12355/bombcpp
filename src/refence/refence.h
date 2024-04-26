#pragma once
#ifndef __REFENCE_H__
#define __REFENCE_H__
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

class Cperson {
    public:
    void display();
    Cperson();

    private:
    long  m_s;
    long long m_tem_r;
    long long &m_r;
    

};

void ref_main();

#endif
#endif // __REFENCE_H__