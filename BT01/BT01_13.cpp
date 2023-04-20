#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int x, y;
    cin >> x >> y;
    double distance = sqrt(pow(x,2) + pow(y,2));
    cout << distance;
    return 0;
}
