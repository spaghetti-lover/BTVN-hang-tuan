#include <iostream>
using namespace std;

void hoan_vi(string s, int k, int n) {
    if (k == 0) {
        cout << s << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        char c = 'a' + i;
        if (s.find(c) == string::npos) {
            hoan_vi(s + c, k - 1, n);
        }
    }
}


int main() {
    int n, k;
    cin >> n >> k;
    hoan_vi("", k, n);
    return 0;
}