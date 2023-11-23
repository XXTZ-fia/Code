#include<bits/stdc++.h>
using namespace std;
int c[3001][3001]={0};
int main(){
    for(int i=1;i<=3000;i++){
        c[1][i]=i;
        c[i][i]=1;
    }
    for(int i=2;i<=3000;i++){
        for(int j=i+1;j<=3000;j++){
            c[i][j]=(c[i-1][j-1]+c[i][j-1])%1000007;
        }
    }
    int m,n;
    while(scanf("%d %d",&m,&n) == 2){
        printf("%d\n",c[m][n]);    
    }
    return 0;
}