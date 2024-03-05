#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    double b;
    double c;

    cout << "Enter length of side a: ";
    cin >> a;

    cout << "Enter length of side b: ";
    cin >> b;

    cout << "Enter length of side c: ";
    cin >> c;

    double s = (a + b + c) / 2.0;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
