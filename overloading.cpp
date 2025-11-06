#include <iostream>
using namespace std;

class AddNumbers {
private:
    int num1, num2, sum;

public:
    AddNumbers() {
        num1 = 0;
        num2 = 0;
    }
    AddNumbers(int a, int b) {
        num1 = a;
        num2 = b;
    }
    int add() {
        sum=num1 + num2;
        return sum;
    }
};

int main() {
    AddNumbers c;
    cout << "Sum using default constructor: " << c.add() << endl;
    AddNumbers d(10, 20);
    cout << "Sum using parameterized constructor: " << d.add() << endl;

    return 0;
}
