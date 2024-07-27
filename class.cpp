#include<iostream>
using namespace std;

class Employee{
    private:
    int a;
    int b;

    public:
    int c;
    int d;

    void setData(int a1, int b1 , int c1); // declare here ; define out side class

    void printData(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
        cout<<"d = "<<d<<endl;
    }
};

void Employee :: setData(int a1,int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Employee pravin;
    pravin.d = 21;
    pravin.setData(15,16,17);
    pravin.printData();
}