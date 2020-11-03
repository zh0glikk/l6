#ifndef level2_hpp
#define level2_hpp

#include <iostream>
#include "base2.hpp"
#include "base.hpp"

class level2 : public base2, virtual public base {
public:
    int l2;
    
    level2();
    level2(int value);
    ~level2();
    
};

#endif /* level2_hpp */
