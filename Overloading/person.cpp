#include <sstream>
#include "Person.h"

/* Person::Person(): {
    name = "";
    age = 0;
} */

/* Person::Person(): name("unnamed"), age(0) {
} */

/* Person::Person(string newName, int newAge) {
    name = newName;
    age = newAge;
} */

/* Person::Person(string name, int age) {
    this->name = name;
    this->age = age;

    // cout << "Memory location: " << this << endl;
} */

/* Person::Person(string name, int age): name(name), age(age) {

} */

string Person::toString() {
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age;
    
    return ss.str();
}