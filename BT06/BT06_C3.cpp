#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printCombinations(vector<string>& combinations, string prefix, int k, int n, int start) {
    if (k == 0) {
        combinations.push_back(prefix);
        return;
    }

    for (int i = start; i <= n; i++) {
        string newPrefix = prefix + to_string(i);
        printCombinations(combinations, newPrefix, k - 1, n, i + 1);
    }
}

int main() {
    int n, k;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;

    vector<string> combinations;
    printCombinations(combinations, "", k, n, 1);

    cout << "Combinations of length " << k << " from 1 to " << n << ":" << endl;
    for (string combination : combinations) {
        cout << "[" << combination << "]" << endl;
    }

    return 0;
}
