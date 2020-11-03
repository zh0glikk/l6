#include "A.hpp"

A::A(int a) : a(a) {
    std::cout << "Hello from A" << std::endl;
}

A::~A() {
    std::cout << "Bye from A" << std::endl;
}
