#define log_info(val) (std::cout << __FUNCTION__ << ":" << __LINE__ <<  "  " << val << "\n" << std::endl )
#include<vector>
#include<iostream>
#include<stdint.h>
#include "spdlog/spdlog.h"
#include "template.h"
using namespace std;
int sum[] = {1,2,3,4,5,6,7,8};
vector<int> a(sum,sum + 8);
template<typename T>
void it_output(vector<T>&str)
{ 
    if(!str.empty())
    {
    cout << "size is "<< str.size() << "  iterator start value:  ";
    for(int i = 0;i < str.size();i++)
    {
        cout << str[i] ;
    }
    cout << "\n";
    } 
    log_info("it ouput error");
}
void fun1( int c ,vector<string> & body ,vector<int> & f)
{
     int size = a.size();
     log_info ("vector size is " << size );
     vector<int>::iterator it = a.begin();
     advance(it,2);

     a.insert(it,c);

     log_info("iterator of position 3 is " << a[2]);

     it_output(a);
     
     log_info("vector string begin  is " << *(body.begin()));
     log_info("vector string end is " << (body.back()));

     vector<string>::iterator st_it = body.begin();
     advance(st_it,2);
     body.insert(st_it,"NO,You are a loser");
     log_info("already changed person is ");
     it_output(body);
     


}
//声明和实现不能直接初始化或做默认值
//void check_default_fun2(int fir ,int sen =23);
void check_default_fun2 (int fir ,int sen)
{
    // fir = 9;
    log_info("first value " << fir << "  " << "second value" << sen);
}
//函数中的占位参数，只是为了函数对齐，没有实际的作用，也就是或不能作为参数在函数中使用
void check_default_fucn3(int fir ,int _)
{
    if(fir >= 99)
    {
        fir = 0x88;
        log_info("first value is "<<"0x" << hex << fir);
    }
   log_info("first value is "<< fir);
}


// template <class T>
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


// template<class T>
// T tmp<T>::all_sum(std::vector<T> const &attr)
// {
//     T res = {};
//     for(int i = 0;i < attr.size();i ++)
//     {
//         res += attr[i];
//     }
//     return res;

// }
// template<class T>
//  void tmp<T>::pri_all_sum(std::vector<T> const & attr,size_t n)
// {
//     cout << all_sum(attr) << endl;
// }

// // template <class T>
// // std::string all_sum(std::vector<T> const &attr)
// // {
// //     std::string attr_str;
// //     for(int i = 0 ; i< attr.size(),i ++){
// //         attr_str 
// //     }
// // }
// //打印auto推导；
// template<class T>
// std::vector<T>& tmp<T>::insert_auto(int n,std::vector<T> &attr)   {
 
//     //std::vector<T> ar = {"44","34","99","999","999","99"};
//     std::vector<T> ar = {44,34,99,999,998,991};
//     attr.insert(attr.begin(),ar.begin() + 1,ar.end() - 1);
    
//     int a = 9;
//     auto &ref = a;
//         return attr;
// }

// template<class T>
// void tmp<T>::pri_auto( std::vetctor<T> const &attr)
// {

//     tmp<T>::pri_all_sum(temp<T>::insert_auto(4,attr));
//     rerurn ;
// }
// // template<class T>
// // void tmp<T>::pri_auto(std::vector<T>  & attr){
// //     tmp<T> temp;
// //     auto t = temp.pri_auto(3,attr);
// //     spdlog::info("called pri auto");
// //     cout << t << endl;
// // }
// template<class T>
// T tmp<T>::sum_not_para()
// {
//     T rec = {};
//     return rec;
// }
// int main()
// {
//     vector<int> s,d;
//     const char *nb[] = {"caowenhao","Ni Ta Ma","Tai Niu Bi" "!!!!"};
//     vector<string> k;
//     for(const char * str: nb)
//     {
//         if(str != nullptr)
//         {
//             k.push_back(str);
//         } else {
//             k.push_back("Shi Zai Shi Gao");
//         }
//     }
//     vector<string> k1 = {"caowenhao","Ni Ta Ma","Tai Niu Bi" "!!!!"};
//     fun1(99,k,d);
//     check_default_fun2(3);
//     check_default_fucn3(100,10);

//     std::vector<int> sum_data_i = {0,9,8,7,6,6};
//     std::vector<float> sum_data_f = {0.98f,89.9f,2343434.34f,345.454f};
//     std::vector<string> sum_data_str = {"cao","wenhao","nb"};
//     tmp<float> temp_f;
//     tmp<int> temp_i;
//     tmp<std::string> temp_s;
//     temp_f.pri_all_sum(sum_data_f,4);
//     temp_i.pri_all_sum(sum_data_i,6);
//     std::string str = temp_s.all_sum(sum_data_str);
//     cout << "sum data size is " << sum_data_str.size() << "   string sum is " << str << endl;
//     spdlog::info("use splog libary is nice!!");
//     // template <class T>
//     std::vector<int> out = temp_i.pri_auto(4,sum_data_i);
//     cout << out << endl;

// }
void template_main()
{
    vector<int> s,d;
    const char *nb[] = {"caowenhao","Ni Ta Ma","Tai Niu Bi" "!!!!"};
    vector<string> k;
    for(const char * str: nb)
    {
        if(str != nullptr)
        {
            k.push_back(str);
        } else {
            k.push_back("Shi Zai Shi Gao");
        }
    }
    vector<string> k1 = {"caowenhao","Ni Ta Ma","Tai Niu Bi" "!!!!"};
    fun1(99,k,d);
    check_default_fun2(3);
    check_default_fucn3(100,10);

    std::vector<int> sum_data_i = {0,9,8,7,6,6};
    std::vector<float> sum_data_f = {0.98f,89.9f,2343434.34f,345.454f};
    std::vector<string> sum_data_str = {"cao","wenhao","nb"};
    tmp<float> temp_f;
    tmp<int> temp_i;
    tmp<std::string> temp_s;
    temp_f.pri_all_sum(sum_data_f,4);
    temp_i.pri_all_sum(sum_data_i,6);
    std::string str = temp_s.all_sum(sum_data_str);
    cout << "sum data size is " << sum_data_str.size() << "   string sum is " << str << endl;
    spdlog::info("use splog libary is nice!!");
    // template <class T>
   temp_i.pri_auto(4,sum_data_i);
}