#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1Int;

public:
    void set_base1Int(int a)
    {
        base1Int = a;
    }
};

class Base2
{
protected:
    int base2Int;

public:
    void set_base2Int(int a)
    {
        base2Int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base1 is : " << base1Int << endl;
        cout << "The value of Base2 is : " << base2Int << endl;
        cout << "The sum of these values is : " << base1Int + base2Int << endl;
    }
};

int main()
{
    Derived der;
    der.set_base1Int(10);
    der.set_base2Int(20);
    der.show();
}