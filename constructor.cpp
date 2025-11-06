#include <iostream>
using namespace std;

class Adder {
private:
    int num1, num2, sum;

public:
    Adder() {
        num1 = 20;
        num2 = 30;
        sum = num1 + num2; 
        cout << "Constructor called: " << num1 << " + " << num2 << " = " << sum << endl;
    }
    ~Adder() {
        cout << "Destructor called: The sum is " << sum << endl;
    }
};

int main() {
    Adder addition;
    return 0;
}
