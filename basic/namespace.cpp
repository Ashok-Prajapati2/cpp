#include <iostream>

// Declaration of a namespace named 'MyNamespace'
namespace MyNamespace
{
    int myFunction(int x, int y)
    {
        return x + y;
    }

}

// Using directive to bring names from MyNamespace into the current scope
using namespace MyNamespace;

// Usage of the namespace
int main()
{

    // No need for the namespace prefix
    int result = myFunction(3, 9);
    std::cout << result << std::endl;

    // To use a function from the namespace, prefix it with the namespace name
    std::cout << MyNamespace::myFunction(3, 4) << std::endl;
    return 0;
}
