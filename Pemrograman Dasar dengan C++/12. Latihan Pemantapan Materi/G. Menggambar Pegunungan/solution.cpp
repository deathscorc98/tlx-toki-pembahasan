#include <iostream>
using namespace std;

void gambar(int n) {
    if (n <= 0) {
        return;
    }

    gambar(n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
    gambar(n - 1);
}

int main() {
    int N;
    if (cin >> N) {
        gambar(N);
    }
    return 0;
}