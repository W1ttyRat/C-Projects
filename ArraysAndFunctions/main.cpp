#include <iostream>
using namespace std;

// could declare variables here // string numbers[] = {"one", "two", "three", "four"};

void show1(const int nElements, string texts[]) {

    // cout << sizeof(texts) << endl; // returns size of pointer

    for(int i=0;  i<nElements; i++) {
        cout << texts[i] << endl;
    }
}

void show2(const int nElements, string *texts) {

    // cout << sizeof(texts) << endl; // returns size of pointer

    for(int i=0;  i<nElements; i++) {
        cout << texts[i] << endl;
    }
}

void show3(string (&texts)[4]) {

    // cout << sizeof(texts) << endl; // returns size of pointer

    for(int i=0;  i<sizeof(texts)/sizeof(texts[0]); i++) {
        cout << texts[i] << endl;
    }
}

/* string *getArray() {
    // dont return pointers to local variables
    // string texts[] = {"one", "two", "three", "four"};
    return numbers;
} */

char *getMemory() {
    char *pMem = new char[100];
    return pMem;
}

void freeMemory(char *pMem) {
    delete [] pMem;
}

int main() {

    string texts[] = {"apple", "banana", "cherry", "elderberry"};

    cout << sizeof(texts) << endl;

    show3(texts);

    char *pMemory = getMemory();
    freeMemory(pMemory);

    return 0;
}