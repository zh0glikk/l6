#include <iostream>
#include "ABC/C.hpp"
#include "XYZ/X.hpp"
#include "task5/toplevel.hpp"
#include "task6/task6.cpp"

int main(int argc, const char * argv[]) {
//    D3* d_3 = new D3();
//    std::cout << d_3->getD3() << std::endl;
//    delete d_3;
    std::cout << "-------" << std::endl;
    
    D4* d_4 = new D4();
    std::cout << d_4->getD1() << std::endl;
    std::cout << d_4->getD2() << std::endl;
    std::cout << d_4->getB1() << std::endl;
//    std::cout << d_4->getB2() << std::endl;
    delete d_4;
    return 0;
}
