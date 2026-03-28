#include <iostream>
#include <string>
using namespace std;

string removeString(string sentence, string word) {
    int index = sentence.find(word);
    
    if(index < 0) {
       return sentence;
    } else {
       return removeString(sentence.erase(index, word.length()), word);
    }
}

int main() {
    string S,T;
    cin >> S >> T;
    string answer = removeString(S, T);
    
    cout << answer << endl;
    return 0;
}