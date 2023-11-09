#include<bits/stdc++.h>
using namespace std;
int num[200]={0};
int main(){
    int n;
    cin >> n;
    int add =0;
    for(int i = 0; i < n; i++){
        cin >> num[i];
        add += num[i];
    }
    add /= n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(num[i] != add){
            num[i+1] -= (add - num[i]);
            num[i] = add;
            sum++;
        }
    }
    cout <<sum<< endl;
    return 0;
}