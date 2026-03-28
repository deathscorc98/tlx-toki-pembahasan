#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    vector<vector<int>> jarak(N, vector<int>(2));

    for(int i=0;i<N;i++) {
        for(int j=0;j<2;j++) {
            cin >> jarak[i][j];
        }
    }

    vector<int> dekat;

    for(int i=0;i<N-1;i++) {
        for(int j=i+1;j<N;j++) {
            int x = pow(abs(jarak[j][0]-jarak[i][0]), D);
            int y = pow(abs(jarak[j][1]-jarak[i][1]), D);
            int temp = x + y;
            dekat.push_back(temp);
        }
    }

    int min = dekat[0];
    int max = 0;

    for(int k=0;k<dekat.size();k++) {
        if(dekat[k] <= min ) {
            min = dekat[k];
        }
        
        if(dekat[k] >= max) {
            max = dekat[k];
        }
    }

    cout << min << " " << max << endl;

    return 0;
}