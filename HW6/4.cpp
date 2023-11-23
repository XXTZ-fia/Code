#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    int num1 = s.length(), num2 = t.length(); 
    int count = 0; 
    for(int i = 0; i < num1; i++){
        if(s[i] == t[count]){
            count++;
            if(count == num2) break;
        }
    }  
    if(count == num2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}