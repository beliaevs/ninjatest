#include<iostream>
#include "f.h"

int main()
{
    std::cout << f() << "\n";
    std::cout << getConfiguration() << "\n";
    std::cout << getCompiler() << "\n";
    return 0;
}