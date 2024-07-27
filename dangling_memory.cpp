#include<iostream>
using namespace std;


int main(){
    int* danglingPointer = new int(10);
    cout<<*danglingPointer<<endl; // 10
    delete danglingPointer;
    cout<<*danglingPointer<<endl; // random address

    /*
        solution =>
        delete danglingPointer;
        danglingPointer = nullptr;
    */

    return 0;
}
