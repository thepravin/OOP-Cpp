#include <iostream>
using namespace std;

// ******** Base Class ***********
class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}

// ******** Derived Class *********** ( private inherit ==> all public are private )
class Derived : private Base
{
    int data3;

public:
    void process()
    {
        setData(); // ==> new Change
        data3 = data2 * getData1();
    }
    void display()
    {
        cout << "Value of data 1 is : " << getData1() << endl;
        cout << "Value of data 2 is : " << getData2() << endl;
        cout << "Value of data 3 is : " << data3 << endl;
    };
};

//---------------------------------

int main()
{
    Derived der;
    // der.setData();
    der.process();
    der.display();
}