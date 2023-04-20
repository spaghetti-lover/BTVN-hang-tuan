#include <iostream>
using namespace std;

int main () {
    float weight, height;
    cin >> weight >> height;
    cout << "BMI is " << weight / (height * 2);
    return 0;
}
