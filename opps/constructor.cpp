#include <iostream>
#include <string>
using namespace std;

class Usermobile
{
private:
    string name;
    int RAM;
    string processor;
    int battery;

public:

    Usermobile()
    {
        name = name;
        RAM = RAM;
        processor = processor;
        battery = battery;
    }
    // parametric constructor
    Usermobile(string name_, int RAM_, string processor_, int battery_)
    {
        name = name_;
        RAM = RAM_;
        processor = processor_;
        battery = battery_;
    }

    // copy constructor

    Usermobile(Usermobile &mob)
    {
        name = mob.name;
        RAM = mob.RAM;
        processor = mob.processor;
        battery = mob.battery;
    }

    void getMobiledata();
};

void Usermobile::getMobiledata()
{
    cout << "name: " << name << endl;
    cout << "processor: " << processor << endl;
    cout << "battery: " << battery << endl;
    cout << "RAM: " << RAM << endl;
}

int main()
{
                                                        
    Usermobile ashok;                                                                                                                                   

    Usermobile ashok1("ashok", 4, "intel", 3500);

    Usermobile ashok2(ashok1);

    ashok.getMobiledata(); 
    ashok1.getMobiledata();
    ashok2.getMobiledata();
    return 0;
}