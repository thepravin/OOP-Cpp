#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you ?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho ? " << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    int a;

    void greet()
    {
        Base2::greet();
    }
};

int main()
{
    Derived der;
    der.greet();
}