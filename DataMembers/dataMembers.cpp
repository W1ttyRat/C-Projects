#include <iostream>
#include "cat.h"
using namespace std;

int main()
{
    Cat sipsik;
    sipsik.makeHappy();
    sipsik.speak();

    Cat caramel;
    caramel.makeSad();
    caramel.speak();

    return 0;
}