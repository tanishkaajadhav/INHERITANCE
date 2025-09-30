#include <iostream>
using namespace std;

class Base
{
protected:
    int num;

public:
    void SetNum(int n)
    {
        num = n;
    }
};

class Derived : public Base
{
public:
    void Display()
    {
        cout << "Value of num in Derived class: " << num << "\n";
    }
};

int main()
{
    Derived obj;
    obj.SetNum(100);
    obj.Display();
    return 0;
}

/*
OUTPUT
Value of num in Derived class: 100
*/