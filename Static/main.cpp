#include <iostream>
using namespace std;

// .h header file
class Test {
public:
    // initialisation of const must be done here
    static int const MAX = 99;

private:
    static int count;
    int id;

public:
    Test() {
        id = ++count;
    }

    int getId() {
        return id;
    }

    static void showInfo() {
        cout << count << endl;
    }
};

// .cpp source
int Test::count = 0;

int main() {

    cout << Test::MAX << endl;

    Test test1;
    cout << "Object 1 id: " << test1.getId() << endl;
    Test test2;
    cout << "Object 2 id: " << test2.getId() << endl;

    Test::showInfo();

    return 0;
}