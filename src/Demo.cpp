#include <iostream>
#include "FctArgs.h"

typedef za::FctArgs<int, std::string,bool> arg_3_isb;
typedef za::FctArgs<int, std::string> arg_2_is;

void function2Args(arg_2_is arg)
{
    std::cout << __PRETTY_FUNCTION__ << "\n";
    std::cout <<"First arguemnt: "<< arg.arg1() <<"\n";
    std::cout <<"Second arguemnt: "<< arg.arg2() <<"\n";        
}
void function3Args(arg_3_isb arg)
{
    std::cout << __PRETTY_FUNCTION__ <<"\n";
    std::cout <<"First arguemnt: "<< arg.arg1() <<"\n";
    std::cout <<"Second arguemnt: "<< arg.arg2() <<"\n";
    std::cout <<"Third arguemnt: "<< arg.arg3() <<"\n";

}

int main() {
    std::cout << "Demo FctArgs template class\n";

    arg_2_is function2ArgsEx(100, "test 2 args");    
    arg_3_isb function3ArgsEx(5, "test 3 args", true);
    function2Args(function2ArgsEx);
    function3Args(function3ArgsEx);

    return 0;
}