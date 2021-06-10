#include <iostream>
#include "FctArgs.h"

void function3Args(za::FctArgs<int, std::string,bool> arg)
{
    std::cout << __PRETTY_FUNCTION__ <<"\n";
    std::cout <<"First arguemnt: "<< arg.arg1() <<"\n";
    std::cout <<"Second arguemnt: "<< arg.arg2() <<"\n";
    std::cout <<"Third arguemnt: "<< arg.arg3() <<"\n";

}
void function2Args(za::FctArgs<int, std::string> arg)
{
    std::cout << __PRETTY_FUNCTION__ << "\n";
    std::cout <<"First arguemnt: "<< arg.arg1() <<"\n";
    std::cout <<"Second arguemnt: "<< arg.arg2() <<"\n";        
}
int main() {
    std::cout << "Demo FctArgs template class\n";

    za::FctArgs<int, std::string> function2ArgsEx(100, "test 2 args");    
    za::FctArgs<int, std::string,bool> function3ArgsEx(5, "test 3 args", true);
    function2Args(function2ArgsEx);
    function3Args(function3ArgsEx);

    return 0;
}