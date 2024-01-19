#include <iostream>

class MyClass {
public:
    int x; // A member variable

    // Constructor without parameters
    MyClass() {
        x = 0; // Initialize x to 0 when an object is created
        std::cout << "Constructor called. Initialized x to 0."<< x << std::endl;
    }

    // Constructor with parameter
    MyClass(int value) {
        x = value; // Initialize x to the provided value
        std::cout << "Constructor called. Initialized x to " << value << "." << std::endl;
    }
};

int main() {
    MyClass obj1; // Creating an object using the default constructor
    std::cout << "obj1.x: " << obj1.x << std::endl;

    MyClass obj2(5); // Creating an object using the parameterized constructor
    std::cout << "obj2.x: " << obj2.x << std::endl;

    return 0;
}
