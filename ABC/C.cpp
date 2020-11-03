#include "C.hpp"

C::C(int a, int b, int c) : A(a), B(b), c(c) {
    std::cout << "Hello from C" << std::endl;
}

C::~C() {
    std::cout << "Bye from C" << std::endl;
}
