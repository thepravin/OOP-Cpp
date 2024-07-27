#include <iostream>
using namespace std;

// ========= BASE CLASS =========
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number(void)
{
    cout << "Roll number is : " << roll_number << endl;
}

// ========= DERIVED CLASS (A) ======
class Exam : public Student
{
protected:
    float maths;
    float physic;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physic = m2;
    }
    void get_marks(void)
    {
        cout << "Math marks are : " << maths << endl;
        cout << "Physic marks are : " << physic << endl;
    }
};

// ========= DERIVED CLASS (B) ======
class Result : public Exam
{
protected:
    float percentage;

public:
    void cla_percentage(void)
    {
        percentage = ((maths + physic) / 2);
    }
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Percentage is : " << percentage << " %" << endl;
    }
};

int main()
{
    Result pravin;
    pravin.set_roll_number(17);
    pravin.set_marks(91.2, 98.5);
    pravin.cla_percentage();
    pravin.display();
}
