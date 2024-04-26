#include<iostream>
#include "refence.h"
using namespace std;
long color = 334;
long long size1 = 100;

/*/home/caowenhao/llam/tt/src/refence/refence.cpp:6:17: error: only constructors take member initializers
 Cperson c1 () : m_s(color),m_r(size);*/
// Cperson c1 () : m_s(color),m_r(size);

Cperson::Cperson() : m_s(color),m_r(m_tem_r) {
    m_tem_r = size1 ;
}

void Cperson::display()
{
    spdlog::error("enter {}",__func__);
    Cperson p1 ;
    spdlog::error("long  type of size = {}" , sizeof(long) );
    spdlog::error("long long type of size ={} ",sizeof(long long));
    spdlog::error( "Cperson type of size ={} ",sizeof(Cperson));
     //cout << "the value second parameter of p1  = " << hex << showbase <<  *((long long *)p1 +1) << endl;
     std::cout << "the value second parameter of p1  = {:x} " << p1.m_r << "\n";
     std::cout << "the argument  second of p1  = {:x}" << &size1 << "\n";
}

void ref_main()
{
    spdlog::error("enter {}",__func__);
    Cperson p3;
    p3.display();
}