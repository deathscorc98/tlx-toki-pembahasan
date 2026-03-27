#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n,m,p;
    
    cin >> n >> m >> p;
    
	vector<vector<int>> matrixA(n, vector<int>(m));
	vector<vector<int>> matrixB(m, vector<int>(p));
	vector<vector<int>> matrixC(n, vector<int>(p));
	
	for(int i=0;i<n;i++) {
	    for(int j=0;j<m;j++) {
	       cin >> matrixA[i][j];
	    }
	}
	
	for(int k=0;k<m;k++) {
	    for(int l=0;l<p;l++) {
	       cin >> matrixB[k][l]; 
	    }
	}
	
	//multipy matrix A and matrix B
    for(int a=0;a<n;a++) {
	    for(int b=0;b<p;b++) {
	        int temp = 0;
	        for(int c=0;c < m;c++) {
	            temp += matrixA[a][c]*matrixB[c][b];   
	        }
	        matrixC[a][b] = temp;
	    }
	}
	
	//result of program
	for(int a=0;a<n;a++) {
	    for(int b=0;b<p;b++) {
	        cout << matrixC[a][b] << " " ;
	    }
	    cout << endl;
	}

    return 0;
}