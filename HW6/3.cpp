#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int count = -1; 
    int num1 = a.length();
    int num2 = b.length();
    for(int i = 0; i <= num1 - num2; i++){
        if(a[i] == b[0]){
            for(int j = 0; j < num2; j++){
                if(a[i + j] != b[j]) break;
                if(j == num2 - 1){
                    count = i;
                    cout << count;
                    return 0;
                }
            }
        }
    }
    cout <<"-1";
    return 0;
}