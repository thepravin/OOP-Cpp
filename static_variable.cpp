#include<iostream>
using namespace std;

class Employee{
    public:
    static int count; // declaration
    string eName;

    void setName(string name){
        eName=name;
        count++;
    }

    void display(void){
        cout<<"Name of Employee : "<<eName<<" "<<"Id : "<<count<<endl;
    }
};

// int Employee :: count = 0; // defind
int Employee :: count;   // both are same (default 0)


int main(){
    Employee pravin;
    pravin.setName("Pravin");
    pravin.display();

    Employee ganesh;
    ganesh.setName("Ganesh");
    ganesh.display();

}