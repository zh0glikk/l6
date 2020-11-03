#include "base2.hpp"

base2::base2() : b2(0) {
    std::cout << "base2()" << std::endl;
}

base2::base2(int base) : b2(base) {
    std::cout << "base2(int base)" << std::endl;
}

base2::~base2() {
    std::cout << "~base2()" << std::endl;
}
