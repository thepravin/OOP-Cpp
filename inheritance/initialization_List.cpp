// class ke data members ko value deneka tarika hai

#include <iostream>
using namespace std;

class Test
{   // declaration order matter
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(j+i)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a + j)
    Test(int i, int j) : b(j), a(i + b) // ----> will create problems because 'a' will be initialized first
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t1(5, 9);
}