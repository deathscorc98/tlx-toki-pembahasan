// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    //Write C++ code here
    int a,b,c;
    cin >> a >> b >> c;
    
    vector<vector<int>> matrix(a, vector<int>(b)); 
    vector<string> operation(c);
    
    for(int i=0;i<a;i++) {
        for(int j=0;j<b;j++) {
            cin >> matrix[i][j];
        }
    }
    
    for(int i=0;i<c;i++) {
        cin >> operation[i];
    }
    
    for(int i=0;i<c;i++) {
        if(operation[i]=="_") {
          for(int j=0;j<a/2;j++) {
              for(int k=0;k<b;k++) {
                  int temp = matrix[j][k];
                  matrix[j][k] = matrix[a-j-1][k];
                  matrix[a-j-1][k] = temp; 
              }
          }    
        } 
        
        else if(operation[i]=="|") {
          for(int k=0;k<a;k++) {
              for(int l=0;l<b/2;l++) {
                  int temp = matrix[k][l];
                  matrix[k][l] = matrix[k][b-l-1];
                  matrix[k][b-l-1] = temp;
              }
          }    
        } 
        else if(operation[i]=="90") {
            
        } 
        else if(operation[i]=="180") {
           for(int j=0;j<a/2;j++) {
              for(int k=0;k<b;k++) {
                  int temp = matrix[j][k];
                  matrix[j][k] = matrix[a-j-1][k];
                  matrix[a-j-1][k] = temp; 
            }
          }
          
          for(int k=0;k<a;k++) {
              for(int l=0;l<b/2;l++) {
                  int temp = matrix[k][l];
                  matrix[k][l] = matrix[k][b-l-1];
                  matrix[k][b-l-1] = temp;
              }
          }    
          
          
        } else if(operation[i]=="270") {
            
        }
    }
    
    for(int i=0;i<a;i++) {
        for(int j=0;j<b;j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}