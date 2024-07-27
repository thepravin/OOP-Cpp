#include <iostream>
using namespace std;
 
class Employee
{
 
public:
    static int count; //static variable
    string eName;
 
    void setName(string name)
    {
        eName = name;
        count++;
    }
 
    static int getCount()//static method
    {
        return count;
    }
};
 
int Employee::count = 0; //defining the value of count
 
int main()
{
    Employee pravin;
    pravin.setName("Pravin");
    cout << Employee::getCount() << endl;

     Employee ganesh;
    ganesh.setName("ganesh");
    cout << Employee::getCount() << endl;

     Employee rahul;
    rahul.setName("rahul");
    cout << Employee::getCount() << endl;
}
