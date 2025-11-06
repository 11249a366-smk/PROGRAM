#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static data member

public:
    Counter() {
        count++;
    }

    static int getCount() {  // Static member function
        return count;
    }
};

// Initialize static member outside class
int Counter::count = 0;

int main() {
    cout << "Initial count: " << Counter::getCount() << endl; // 0

    Counter c1;
    Counter c2;

    cout << "Count after creating 2 objects: " << Counter::getCount() << endl; // 2

    return 0;
}