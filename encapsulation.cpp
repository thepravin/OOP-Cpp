#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    string name;

    void setAge(int a)
    {
        age = a;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    Student std;
    std.name = "Pravin";
    cout << "Name of Student : " << std.name << endl;
    std.setAge(21);
}