#ifndef C_hpp
#define C_hpp

#include <iostream>
#include "A.hpp"
#include "B.hpp"


class C : public B, public A{
public:
    int c;
    
    C(int a = 1, int b = 1, int c = 1);
    ~C();
};

#endif /* C_hpp */
