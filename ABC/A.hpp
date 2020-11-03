#ifndef A_hpp
#define A_hpp

#include <iostream>
#include "A1.hpp"

class A : virtual public A1 {
public:
    int a;
    
    A(int a = 1);
    ~A();
};

#endif /* A_hpp */
