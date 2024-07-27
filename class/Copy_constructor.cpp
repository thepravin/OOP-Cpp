#include <iostream>
using namespace std;

class Number
{
public:
    int a;

    Number() { a = 0; }

    Number(int a1)
    {
        a = a1;
    }

    // copy constructor
    Number(Number&a1)
    {
        cout << "Copy Constructor Called !!!" << endl;
        a = a1.a;
    }

    void printNumber(void)
    {
        cout << " Number is : " << a << endl;
    }
};

int main(){
    Number x, y, z(50) , z2;

    x.printNumber(); // 0
    y.printNumber(); // 0
    z.printNumber(); // 50

    Number p(z);
    p.printNumber(); // 50 => copy Constructor called

    z2= z; 
    z2.printNumber(); // 50 => NOT copy Constructor called

    Number q = z;
    q.printNumber(); // 50 => copy Constructor called


}