#include <iostream>
using namespace std;

int main() {

    const int NSTRINGS= 5;

    string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

    string *pTexts = texts;

    pTexts += 3;

    cout << *pTexts << endl;

    pTexts -= 2;

    cout << *pTexts << endl;

    string *pEnd = &texts[NSTRINGS];
    pTexts = &texts[0];

    while (pTexts != pEnd) {
        cout << *pTexts << " " << endl;
        pTexts++;
    }

    // set ptexts back to start
    pTexts = &texts[0];

    long elements = pEnd - pTexts;

    cout << elements << endl;

    // set ptexts back to start
    pTexts = &texts[0];

    pTexts += NSTRINGS/2;
    cout << *pTexts << endl;

    return 0;
}