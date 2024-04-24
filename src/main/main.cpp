#include<iostream>
#include<vector>
#include<array>
#include<cstdio>

#include "spdlog/spdlog.h"
#include "main.h"
#include "stl.h"
#include "template.h"
#include "feature.h"

int main()
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
    //cout << out ;
#if __DYNAMIC_I_O__
    i_o();
#endif

    std::array<int ,9> arr{};
    ar_list(arr);
    recast_type_c();
    recast_type_cpp();
    review_extrn_origin();
    view_extern();
    output(sum_data_f);

}