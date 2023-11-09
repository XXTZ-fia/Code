#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int g = 0; g < n; g++){
        int x,y;
        cin >> x >> y;
        for(int i = 0; i <= x; i++){
            for(int j = 0; j <= x - i; j++){
                int k = x - i - j;
                if(3*i + 2*j + k == y) cout<<i<<" "<<j<<" "<<k<<endl;
            }
        }
    }
    return 0;
}