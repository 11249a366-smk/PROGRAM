#include <iostream>
using namespace std;
class Rectangle {
public:
    float length;
    float width;
   Rectangle(float l, float w) : length(l), width(w){}
    float area() {
        return length * width;
    }
};
float calculateArea(Rectangle rect) {
    return rect.area();
}

int main() {
    Rectangle rect1(10.5, 5.0);
    float area = calculateArea(rect1);
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
