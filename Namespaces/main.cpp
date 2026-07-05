#include <iostream>
#include "cat.h"
#include "Animals.h"
using namespace std;

//using namespace cats;
using namespace kass;

int main() {

    Cat cat;
    cat.speak();

    kass::Cat cat2;
    cat2.speak();

    cats::Cat cat3;
    cat3.speak();

    cout << kass::CATNAME << endl;
    cout << cats::CATNAME << endl;

    cout << CATNAME << endl;
    
    return 0;
}