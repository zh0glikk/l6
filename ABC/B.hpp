#ifndef B_hpp
#define B_hpp

#include <iostream>
#include "A1.hpp"

class B : virtual public A1 {
public:
    int b;
    
    B(int b = 1);
    ~B();
};

#endif /* B_hpp */
