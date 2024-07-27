

#include <iostream>
using namespace std;

// step 1 : Declare parent class ( forward declaration )
class Complex;

// step 2 : child class which use parent class
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    // step 3 : Only declare function which use parent class as a arguments
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

// step 4 : parent class
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

    // step 5 : give access of all private members to class
    friend class Calculator;

    // if you want to give only one function of class
    // int Calculator ::sumRealComplex(Complex , Complex )
};

// step 6 : define functions which need parents private members access
int Calculator ::sumRealComplex(Complex ob1, Complex ob2)
{
    return (ob1.a + ob2.a);
}
int Calculator ::sumCompComplex(Complex ob1, Complex ob2)
{
    return (ob1.b + ob2.b);
}

int main()
{
    Complex num1;
    num1.setData(2, 3);
    num1.printNumbers();

    Complex num2;
    num2.setData(4, 5);
    num2.printNumbers();

    Calculator calc;
    int realSum = calc.sumRealComplex(num1, num2);
    int compSum = calc.sumCompComplex(num1, num2);
    cout << "Real Part Sum : " << realSum << endl;
    cout << "Complex Part Sum : " << compSum << endl;
}