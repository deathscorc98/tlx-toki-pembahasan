#include <iostream>
using namespace std;

int main () {
    string s;
    int k;

    cin >> s >> k;
    
    for(int j=1;j<=k;j++) {
       for(int i=0;i<s.size();i++) {
           char c = s[i];
           int value = static_cast<int>(c);
           int change = value+j;
           if(change > 122) {
              int temp = change - 122;
              s[i] = static_cast<char>(96+temp);
           } else {
              s[i] = static_cast<char>(change);
           }
        }
        cout << s << endl;
    }
}