#include <iostream>
using namespace std;

class Animal {
private:
    string name;

public:
    void setName(string name) { this->name = name;};
    void speak() const { cout << "My name is " << name << endl; };
    //void speak() const { cout << "My name is " << name << endl; name = "New Name";}
};

int main() {

    //const int value = 7;
    //value = 10;

    const double PI = 3.141592;
    cout << PI << endl;

    Animal animal;
    animal.setName("Freddy");
    animal.speak();

    int value = 8;

    int *pValue = &value;
    // const int * const pValue = &value; neither works on line 34, 35

    cout << *pValue << endl;

    int number = 11;
    pValue = &number; // error when: int * const pValue = &value;
    *pValue = 12;  // error when: const int *pValue = &value;

    cout << *pValue << endl;

    return 0;
}