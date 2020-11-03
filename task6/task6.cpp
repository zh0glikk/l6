#include <iostream>

class B1 {
private:
    int b1;
public:
    B1(int b1 = 1) {
        this->b1 = b1;
        std::cout << "B1()" << std::endl;
    }
    
    ~B1() {
        std::cout << "~B1()" << std::endl;
    }
    
    int getB1() {
        return this->b1;
    }
};

class B2 {
    private:
        int b2;
    public:
        B2(int b2 = 1) {
            this->b2 = b2;
            std::cout << "B2()" << std::endl;
        }
        
        ~B2() {
            std::cout << "~B2()" << std::endl;
        }
        
        int getB2() {
            return this->b2;
        }
};

class D1 : public B1, private B2 {
private:
    private:
        int d1;
    public:
        D1(int d1 = 1) {
            this->d1 = d1;
            std::cout << "D1()" << std::endl;
        }
        
        ~D1() {
            std::cout << "~D1()" << std::endl;
        }
        
        int getD1() {
            return this->d1;
        }
};

class D2 : protected B2 {
private:
    private:
        int d2;
    public:
        D2(int d2 = 1) {
            this->d2 = d2;
            std::cout << "D2()" << std::endl;
        }
        
        ~D2() {
            std::cout << "~D2()" << std::endl;
        }
        
        int getD2() {
            return this->d2;
        }
};

class D3 : protected D1 {
private:
    private:
        int d3;
    public:
        D3(int d3 = 1) {
            this->d3 = d3;
            std::cout << "D3()" << std::endl;
        }
        
        ~D3() {
            std::cout << "~D3()" << std::endl;
        }
        
        int getD3() {
            return this->d3;
        }
};

class D4 : public D1, public D2 {
private:
    private:
        int d4;
    public:
        D4(int d4 = 1) {
            this->d4 = d4;
            std::cout << "D4()" << std::endl;
        }
        
        ~D4() {
            std::cout << "~D4()" << std::endl;
        }
        
        int getD3() {
            return this->d4;
        }
};

