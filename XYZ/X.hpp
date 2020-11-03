#ifndef X_hpp
#define X_hpp

#include <iostream>
#include "Y.hpp"
#include "Z.hpp"

class X : public Z {
private:
    Y objY;
public:
    X();
    ~X();
};

#endif /* X_hpp */
