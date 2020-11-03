#include "toplevel.hpp"

toplevel::toplevel() : tl(0) {
    std::cout << "toplevel()" << std::endl;
}

toplevel::toplevel(int value) : tl(value) {
    std::cout << "toplevel(int value)" << std::endl;
}

toplevel::~toplevel() {
    std::cout << "~toplevel()" << std::endl;
}
