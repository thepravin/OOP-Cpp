#include <iostream>
using namespace std;

class Num {
public:
    int a;

    Num(int a) {
        this->a = a;
    }

    // Correctly overload the + operator
    Num operator+(const Num& other) {
        return Num(a + other.a);
    }
};

int main() {
    Num n1(5);
    Num n2(4);

    Num sum = n1 + n2; // Use overloaded + operator
    cout << "Sum: " << sum.a << endl; // Accessing the member 'a' for output

    return 0;
}
