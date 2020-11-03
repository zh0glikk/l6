#ifndef toplevel_hpp
#define toplevel_hpp

#include <iostream>
#include "level1.hpp"
#include "level2.hpp"

class toplevel : public level1, virtual public level2 {
public:
    int tl;
    
    toplevel();
    toplevel(int value);
    ~toplevel();
    
};

#endif /* toplevel_hpp */
