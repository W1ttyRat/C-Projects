#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

/* public:
    Person();
    //Person(string newName) { name = newName; age = 0; };
    //Person(string newName, int newAge);
    Person(string name, int age);
    string toString();  */
    
    public:
    Person(): name("unnamed"), age(0) {};
    Person(string name, int age): name(name), age(age) {};

    string toString();
}; 

#endif