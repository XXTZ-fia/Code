#include<bits/stdc++.h>
using namespace std;
int num[2000]={0};
bool result[2000]={0};
int main(){
    int p;
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < 2000; j++) result[j] = 0;
        for(int j = 0; ;j++){
            cin >> num[i];
            result[num[i]] = 1;
            if(num[i] == 0){
                p = i;
                break;
            }   
        }
        for(int j = 1; j <= 2000; j++){
            if(result[j] == 0){
                cout << j << endl;
                break;
            }
        }
    }
    
    return 0;
}