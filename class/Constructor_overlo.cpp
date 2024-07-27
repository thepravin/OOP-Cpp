// Constructor Overloading
#include <iostream>
using namespace std;

class Complex
{
public:
    int a;
    int b;

    // first Constructor
    Complex(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    // second Constructor
    Complex(int a1)
    {
        a = a1;
        b = 0;
    }

    void printNumber(void)
    {
        cout << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(10, 20);
    Complex c2(15);

    c1.printNumber();
    c2.printNumber();
}