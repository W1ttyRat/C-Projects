#include <iostream>
using namespace std;

int main()
{
    int value1 = 7;
    int value2 = 4;

    if (value1 >= 5)
    {
        cout << "Condition 1: true" << endl;
    }
    else
    {
        cout << "Condition 1: false" << endl;
    }

    if (value1 == 7 && value2 < 5)
    {
        cout << "Condition 2: true" << endl;
    }
    else
    {
        cout << "Condition 2: false" << endl;
    }

    if (value1 == 7 || value2 > 2)
    {
        cout << "Condition 3: true" << endl;
    }
    else
    {
        cout << "Condition 3: false" << endl;
    }

    bool condition1 = value2 != 8 && value1 == 10;
    cout << condition1 << endl;

    bool condition2 = value1 < 10;
    cout << condition2 << endl;

    return 0;
}