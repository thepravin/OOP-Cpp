#include <iostream>
using namespace std;

enum week
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

/* enum indexing start from zero  */

int main()
{
    week day;
    day = Friday;
    cout << "Day : " << day + 1 << endl;

    return 0;
}