#include <iostream>
using namespace std;

int main () {
    while(cin) {
        int N;
        cin >> N;
        int var = ((N % 5 == 0 && N > 0) ? (N / 5) : -1);
        if (var == -1) {
            break;
        }
        else {
            cout << var <<endl;
            continue;
        }
    }
    return 0;
}

