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

class Intermediate : public Base
{
public:
    void DisplayIntermediate()
    {
        cout << "This is the Intermediate class.\n";
    }
};

class Derived : public Intermediate
{
public:
    void DisplayDerived()
    {
        cout << "This is the Derived class.\n";
    }
};

int main()
{
    Derived obj;
    obj.DisplayBase();
    obj.DisplayIntermediate();
    obj.DisplayDerived();
    return 0;
}

/*
OUTPUT
This is the Base class.
This is the Intermediate class.
This is the Derived class.
*/