#include <iostream>
using namespace std;

// class is like blue brint

class House
{

    // private , public , protected

private:
    int length, breadth; // member variable
public:
    // member function
    void setData(int x, int y)
    {
        length = x;
        breadth = y;
    }

    void area()
    {
        cout << "Area of house for " << length << ", " << breadth << " is " << length * breadth << endl << endl;
    }
};

// inheritance
//-
// constructor and type - non parameterized / defalt constructor , parameterized constructor and copy constructor
//non parameterized
class Person
{
private:
    string name;
    int age,parameterized_constructor;
    float height;

public:
Person(int x)
    {
        name = "null";
        age = 0;
        height = 0.0f;
        parameterized_constructor = x;
    }
    Person()
    {
        name = "null";
        age = 0;
        height = 0.0f;
    }
    void getData()
    {
        cout << "Name: " << name << endl
             << "Age: " << age << endl
             << "Height: " << height << endl 
             << "parameterized_constructor: "<< parameterized_constructor << endl << endl;
    }
};
///
class Personwioutconstructor
{
private:
    string name;
    int age;
    float height;

public:
    void getData()
    {
        cout << "Name: " << name << endl
             << "Age: " << age << endl
             << "Height: " << height << endl << endl;
    }
};
// // parameterized constructor 
// class PersonA
// {
// private:
//     string name;
//     int age;
//     float height;

// public:
//     PersonA(int x)
//     {
//         name = "null";
//         age = x;
//         height = 0.0f;
//     }
//     void getData()
//     {
//         cout << "Name: " << name << endl
//              << "Age: " << age << endl
//              << "Height: " << height << endl << endl;
//     }
// };
// ---main function -------

int main()
{
    House h, h1;        // object of class House
    h.setData(500, 20); // Set data for the house
    h.area();           // Calculate and display the area

    h1.setData(5, 20);
    h1.area();

    // object for Person constructor / class
    Person obj;
    obj.getData(); // its give a garbage value of parametrized constructor

    Person obj2(25);
    obj2.getData();


    Personwioutconstructor obj1;
    obj1.getData(); // its give some garbage value 

    // PersonA obj2(15);
    // obj2.getData();

    return 0;
}