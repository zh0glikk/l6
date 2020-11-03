#ifndef level1_hpp
#define level1_hpp

#include <iostream>
#include "base2.hpp"
#include "base.hpp"

class level1 : public base2, virtual public base {
public:
    int l1;
    
    level1();
    level1(int value);
    ~level1();
    
};

#endif /* level1_hpp */
