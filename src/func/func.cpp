#include<iostream>
#include<functional>
#include "func.h"

int  call(size_t num){
    int flo1 = 5;
    auto ret = [&]() -> int {
        return num * 2 *flo1;
    };
    spdlog::error("image function is {}",ret());
    return ret();
}

int call_printf(){
    call_twice(call);
    size_t ret = 0;
    ret = call(10);
    spdlog::error("call lamba ca valid: {}",ret);
    
}

int func_call(){
    std::function<int (size_t)> func4 = call;
    func4(99);
    func4(3);
}
void func_main(){
    call_printf();
    func_call();
    
}


