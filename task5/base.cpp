#include "base.hpp"

base::base() : b(0) {
    std::cout << "base()" << std::endl;
}

base::base(int base) : b(base) {
    std::cout << "base(int base)" << std::endl;
}

base::~base() {
    std::cout << "~base()" << std::endl;
}
