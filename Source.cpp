#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m, i = 0, j = -1;
    cin >> n >> m;
    int matrix[n][m], numb_of_digits = n * m;

    for (int c = 1, d = 0; c <= numb_of_digits; d++) {

        while (j < m - 1 - d && c <= numb_of_digits) {
            matrix[i][++j] = c++;
        }
      
        while (i < n - 1 - d && c <= numb_of_digits) {
            matrix[++i][j] = c++;
        }
       
        while (j > d && c <= numb_of_digits) {
            matrix[i][--j] = c++;
        }
       
        while (i > d + 1 && c <= numb_of_digits) {
            matrix[--i][j] = c++;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << setw(4) << matrix[i][j];
        } cout << endl;
    }
}
