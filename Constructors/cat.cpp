#include <iostream>
#include "cat.h"
using namespace std;

Cat::Cat() { //constructor
    cout << "Cat created" << endl;
    happy = true;
}

Cat::~Cat() { //deconstructor
    cout << "Cat destroyed" << endl;
}

void Cat::speak()
{
    if (happy)
    {
        cout << "meow!" << endl;
    }
    else
    {
        cout << "Sssss!" << endl;
    }
}