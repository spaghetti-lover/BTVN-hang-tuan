#include <iostream>
using namespace std;

bool prime (int n) {
    if (n < 2) {
        return true;
    }
    for (int i = 2; i < n/2; i++) {
        if (n % i7 == 0) {
            return false;
        }
    }
    return true;
}

int main () {
    int n; cin >> n;
    if (prime(n) == true) cout << "yes";
    else cout << "no";
}
