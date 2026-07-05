#include <iostream>
using namespace std;

class Animal {
private:
    string name;
public:
    Animal() {
        cout << "Animal created" << endl;
    }

    Animal(const Animal& other): name(other.name) {
        cout << "Animal copied" << endl;
    }

    ~Animal() {
        cout << "Destructor called" << endl;
    }

    void setName(string name) {
        this->name = name;
    }

    void speak() const {
        cout << "My name is " << name << endl;
    }
};

Animal *createAnimal() {
    Animal *pAnimal = new Animal();
    pAnimal->setName("Jerry");
    return pAnimal;
}

int main() {

    // new operator is used to allocate memory for an object on the heap. It returns a pointer to the allocated memory.

    /* Animal *pCat1 = new Animal();
    pCat1->setName("Tom");
    pCat1->speak();
    delete pCat1;

    cout << sizeof(pCat1) << endl; */

    // ===================================================

    // returning objects from functions

    Animal *pFrog = createAnimal();
    pFrog->speak();

    delete pFrog; // Free the allocated memory to avoid memory leak

    return 0;
}