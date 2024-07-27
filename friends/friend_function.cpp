

#include <iostream>
using namespace std;

// step 1 : forward declaration ( if you don't remember then see frined_class code....)

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

    void printNumbers(void)
    {
        cout << a << " + " << b << "i" << endl;
    }

    // step 1 : Declare function
    friend Complex setDataBySum(Complex ob1, Complex ob2);
};

// step 2 : Define function
Complex setDataBySum(Complex ob1, Complex ob2)
{
    Complex ob3;
    ob3.setData((ob1.a + ob2.a), (ob1.b + ob2.b));
    return ob3;
}

int main()
{
    Complex num1;
    num1.setData(2, 3);
    num1.printNumbers();

    Complex num2;
    num2.setData(4, 5);
    num2.printNumbers();

    Complex sum;
    // sum.setDataBySum(num1, num2); ==> give error
    sum = setDataBySum(num1, num2);
    sum.printNumbers();
}