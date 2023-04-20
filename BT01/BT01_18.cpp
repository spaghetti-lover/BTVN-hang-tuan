#include <iostream>
#include <cmath>
using namespace std;

float distance (int x1, int x2, int y1, int y2) {
    return  sqrt(pow(x1-x2,2) + pow(y1-y2,2));
}

int main () {
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    cout << distance (x1, x2, y1, y2);
    return 0;
}
