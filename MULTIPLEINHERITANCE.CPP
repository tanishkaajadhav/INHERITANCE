#include <iostream>
using namespace std;

class Base1
{
public:
    void DisplayBase1()
    {
        cout << "This is Base class 1.\n";
    }
};

class Base2
{
public:
    void DisplayBase2()
    {
        cout << "This is Base class 2.\n";
    }
};

class Derived : public Base1, public Base2
{
public:
    void DisplayDerived()
    {
        cout << "This is Derived class.\n";
    }
};

int main()
{
    Derived obj;
    obj.DisplayBase1();
    obj.DisplayBase2();
    obj.DisplayDerived();
    return 0;
}

/*
OUTPUT
This is Base class 1.
This is Base class 2.
This is Derived class.
*/