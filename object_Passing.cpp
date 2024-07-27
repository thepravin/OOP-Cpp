// passing objects as function argument

#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(Complex ob1, Complex ob2)
    {
        a = ob1.a + ob2.a;
        b = ob1.b + ob2.b;
    }

    void printNumbers(void)
    {
        cout << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex num1;
    num1.setData(2, 3);
    num1.printNumbers();

    Complex num2;
    num2.setData(4, 5);
    num2.printNumbers();

    Complex sum;
    sum.setDataBySum(num1, num2);
    cout << "Sum : ";
    sum.printNumbers();
}