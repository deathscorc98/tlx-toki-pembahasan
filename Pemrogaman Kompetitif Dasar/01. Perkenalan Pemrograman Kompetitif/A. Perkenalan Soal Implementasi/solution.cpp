#include <iostream>
#include <vector>
using namespace std;

int main () {
    int x, y;
    cin >> x >> y;
    vector<vector<int>> matrix(x, vector<int>(y));
    vector<vector<int>> matrixB(y, vector<int>(x));


    for(int i=0;i< x;i++) {
        for(int j=0;j<y;j++) {
            cin >> matrix[i][j];
            matrixB[j][x-i-1] = matrix[i][j];
        }
    }

    for(int i=0;i< y;i++) {
        for(int j=0;j<x;j++) {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}