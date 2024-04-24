#pragma once
#ifndef __TEMPLATE__
#define __TEMPLATE__
#include<vector>
#include<string>
using namespace std;
#ifdef __cplusplus
extern "C" {


#endif

#ifdef __cplusplus
}

template <class T>
class tmp
{
    public:
// std::ostream &operator<< (std::ostream &os,std::vector<T> const &a){
//     // os << __PRETTY_FUNCTION__ << endl;
//     os << "{}";
//     for(size_t i =0;i <a.size();i ++){
//         os << a[i];
//         if(i != a.size() - 1)
//         os << ",";
//     }
//     os << "}";
//     return os;
// }


T all_sum(std::vector<T> const &attr)
{
    T res = {};
    for(int i = 0;i < attr.size();i ++)
    {
        res += attr[i];
    }
    return res;

}

 void pri_all_sum(std::vector<T> const & attr,size_t n)
{
    cout << all_sum(attr) << endl;
}

// template <class T>
// std::string all_sum(std::vector<T> const &attr)
// {
//     std::string attr_str;
//     for(int i = 0 ; i< attr.size(),i ++){
//         attr_str 
//     }
// }
//打印auto推导；
std::vector<T>& insert_auto(int n,std::vector<T> & attr)   {
 
    //std::vector<T> ar = {"44","34","99","999","999","99"};
    // std::vector<T> ar = {44,34,99,999,998,991};
    // attr.insert(attr.begin(),ar.begin() + 1,ar.end() - 1);
    attr.push_back(44);
    
    int a = 9;
    auto &ref = a;
        return attr;
}

void pri_auto( size_t n,std::vector<T>  &attr)
{

   pri_all_sum(insert_auto(4,attr),5);
    return ;
}
// template<class T>
// void tmp<T>::pri_auto(std::vector<T>  & attr){
//     tmp<T> temp;
//     auto t = temp.pri_auto(3,attr);
//     spdlog::info("called pri auto");
//     cout << t << endl;
// }
T sum_not_para()
{
    T rec = {};
    return rec;
}
};

template<class T>
std::vector<T> pri_auto(int n,std::vector<T> &attr);

void fun1( int c ,vector<string> & body ,vector<int> & f);
void check_default_fun2 (int fir ,int sen = 23);
void check_default_fucn3(int fir ,int _);
void template_main();


#endif

#endif //__TEMPLATE__