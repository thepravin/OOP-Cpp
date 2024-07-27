// Run time polymorisim

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show() = 0;
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "This is Derived Class " << endl;
    }
};

int main()
{
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->show();
}