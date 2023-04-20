#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<vector<char>> Hadamard(int n) {
    if (n == 0) {
        
        return { {'o'} };
    }
    else {
        
        vector<vector<char>> H = Hadamard(n - 1);
        
        int N = pow(2, n);
        vector<vector<char>> M(N, vector<char>(N));
        for (int i = 0; i < N / 2; i++) {
            for (int j = 0; j < N / 2; j++) {
                M[i][j] = H[i][j];              
                M[i][j + N / 2] = H[i][j];          
                M[i + N / 2][j] = H[i][j];         
                M[i + N / 2][j + N / 2] = (H[i][j] == 'o' ? '.' : 'o');  
            }
        }
        return M;
    }
}

int main() {
    int n = 4;
    vector<vector<char>> H = Hadamard(n);
    for (int i = 0; i < H.size(); i++) {
        for (int j = 0; j < H[0].size(); j++) {
            cout << H[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
