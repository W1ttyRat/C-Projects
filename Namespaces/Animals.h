#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
using namespace std;

namespace kass {

const string CATNAME = "Sipsik";

class Cat {
public:
    Cat();
    virtual ~Cat();
    void speak();
};

}

#endif /* ANIMALS_H_ */