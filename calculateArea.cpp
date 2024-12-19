#include <iostream>
using namespace std;

double calculateArea(double side) {
    return side * side;
}

int calculateArea(int length, int width) {
    return length * width;
}

double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

float calculateArea(float radius) {
    return 3.14f * radius * radius;
}

int main() {
    double sArea = calculateArea(10.0);
    cout << "Area of Square is: " << sArea << endl;

    int rArea = calculateArea(10, 5);
    cout << "Area of Rectangle is: " << rArea << endl;

    double tArea = calculateArea(4.0, 5.0);
    cout << "Area of Triangle is: " << tArea << endl;

    float cArea = calculateArea(10.5f);
    cout << "Area of Circle is: " << cArea << endl;

    return 0;
}