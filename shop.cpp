
// Array of objects

#include <iostream>
using namespace std;

class Shop
{
    int id;
    int price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Id is : " << id << endl;
        cout << "Price is : " << price << endl;
    }
};

int main()
{
    int size = 3;
    Shop *ptr = new Shop[size]; // array of size
    Shop *tempPtr = ptr;        // stor adderss of first index of array (use at the time of traverse)

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and Price of Product " << i + 1 << endl;
        int p, q;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++; // update pointer add. and go next index
    }

    // traverse array of object
    for (int i = 0; i < size; i++)
    {
        cout << "Item number : " << i + 1 << endl;
        tempPtr->getData(); // becz ptr currently point some differ address so, use tempPtr
        tempPtr++;
    }
}