#include <iostream>
using namespace std;

class Base
{
public:
    void DisplayBase()
    {
        cout << "This is the Base class.\n";
    }
};

class Derived1 : public Base
{
public:
    void DisplayDerived1()
    {
        cout << "This is Derived class 1.\n";
    }
};

class Derived2 : public Base
{
public:
    void DisplayDerived2()
    {
        cout << "This is Derived class 2.\n";
    }
};

int main()
{
    Derived1 obj1;
    Derived2 obj2;
    obj1.DisplayBase();
    obj1.DisplayDerived1();
    obj2.DisplayBase();
    obj2.DisplayDerived2();
    return 0;
}

/*
OUTPUT
This is the Base class.
This is Derived class 1.
This is the Base class.
This is Derived class 2.
*/