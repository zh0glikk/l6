#include "B.hpp"

B::B(int b) : b(b) {
    std::cout << "Hello from B" << std::endl;
}

B::~B() {
    std::cout << "Bye from B" << std::endl;
}
