#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark!" << endl;
    }
};

int main() {
    Dog dog1;
    dog1.eat();   // Inherited from Animal
    dog1.bark();  // Defined in Dog
    return 0;
}
