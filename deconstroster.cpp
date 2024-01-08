#include <iostream>

class MyClass {
public:
    ~MyClass() {
        std::cout << "Destructor called. Object destroyed." << std::endl;
    }
};

int main() {
    {
        MyClass obj; // Creating an object within a scope
    } // Object 'obj' goes out of scope here and the destructor is automatically called

    return 0;
}
