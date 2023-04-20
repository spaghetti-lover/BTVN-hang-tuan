#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float a, b, c;
    cin >> a >> b >> c;
    float s = (a + b + c) / 2;
    double area = sqrt (s * (s - a) * (s - b) * (s - c));
    cout << area;
    return 0;

}
