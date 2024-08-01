#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string name;
    int age = 0;

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }

    int giveAge()
    {
        return age;
    }
};

int main()
{
    Person p1, p2;

    p1.name = "pravin";
    p1.age = 21;

    p1.display();
    cout << "age : " << p1.giveAge() << endl;
}