#include<bits/stdc++.h>
using namespace std;
int num[3000][3000]={0};
int main(){
    for(int i=0;i<3000;i++){
        num[0][i]=i+1;
    }
    for(int i=1;i<3000;i++){
        for(int j=i;j<3000;j++){
            num[i][j]=(num[i-1][j-1]+num[i][j-1])%1000007;
        }
    }
        int m,n;
    while(scanf("%d%d",&n,&m) == 2){
        if(m == 0){
            if(n == 0){
                cout<<1<<endl;
            }else{
                cout<<1<<endl;
            }
                continue;
        }
        if(n == 0){
            cout<<0<<endl;
            continue;
        }
        cout<<num[m-1][n-1]<<endl;
    }
    return 0;
}   