// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin >> n;
    map<long long, long long> num;
    
    long long i=2;
    while(n!=1) {
        if(n%i==0) {
           if(num.find(i) != num.end()) {
               num[i] += 1;
           } else {
               num[i] = 1;
           }
           n = n/i;
        } else {
           i++;
        }
    }
    
    int length = num.size()-1;
    int count = 0;
    string result = "";
    
    for (const auto& pair : num) {
        string answer = to_string(pair.first);
        
        if(count == length) {
            if(pair.second > 1) {
                string prim = answer+"^"+to_string(pair.second);
                result += prim;
            } else {
                result += answer;
            }
        } else {
            if(pair.second > 1) { 
               string prim = answer+"^"+to_string(pair.second);
               result += prim +" x ";
            } else {
               result += answer + " x ";    
            }
            count += 1;
        }
    }

    cout << result << endl;
    return 0;
}