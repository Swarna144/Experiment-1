#include <iostream>

extern int extern_var;

int extern_var = 10;


void staticExample() {
    
    static int static_var = 0;
    static_var++;
    std::cout << "Static variable value: " << static_var << std::endl;
}


void registerExample() {
    
    register int reg_var = 5;
    std::cout << "Register variable value: " << reg_var << std::endl;
}

int main() {
    
    std::cout << "Demonstrating static storage class:" << std::endl;
    staticExample();
    staticExample();
    staticExample();

    std::cout << "\nDemonstrating register storage class:" << std::endl;
    registerExample();

    
    std::cout << "\nDemonstrating extern storage class:" << std::endl;
    std::cout << "Extern variable value: " << extern_var << std::endl;

    return 0;
}
