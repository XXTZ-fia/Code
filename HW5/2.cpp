#include<bits/stdc++.h>
using namespace std;
int num[10000]={0};
int main(){
    int n;
    cin>>n;
    for(int i =0; i < n; i++){
        int m;
        cin >> m;
        int mm=m;
        for(int i=0;i<mm;i++){
            cin>>num[i];
            if(num[i]==0){
                i--;
                mm--;
            }   
        }
        for(int i=0;i<m;i++){
            if(i<mm){
                cout<<num[i]<<" ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}   