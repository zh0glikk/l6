#include "level2.hpp"

level2::level2() : l2(0) {
    std::cout << "level2()" << std::endl;
}

level2::level2(int value) : l2(value) {
    std::cout << "level2(int value)" << std::endl;
}

level2::~level2() {
    std::cout << "~level2()" << std::endl;
}
