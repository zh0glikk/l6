#include "level1.hpp"

level1::level1() : l1(0) {
    std::cout << "level1()" << std::endl;
}

level1::level1(int value) : l1(value) {
    std::cout << "level1(int value)" << std::endl;
}

level1::~level1() {
    std::cout << "~level1()" << std::endl;
}
