#include <iostream>
#include "cat.h"
using namespace std;

void Cat::speak()
{

    if (happy)
    {
        cout << "meow!" << endl;
    }
    else
    {
        cout << "Ssssss!" << endl;
    }
}

void Cat::makeHappy() {
    happy = true;
}

void Cat::makeSad() {
    happy = false;
}