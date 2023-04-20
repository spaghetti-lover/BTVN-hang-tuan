#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n + 1; i++) {
        cin >> B[i];
    }
    int mystery = 0;
    for (int i = 0; i < n; i++) {
        mystery ^= A[i];
        mystery ^= B[i];
    }
    mystery ^= B[n];
    cout << mystery << endl;
    return 0;
}
