#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string num;
        cin >> num;
        int len = num.length();
        for(int i = 0; i < len; i += 2){
            int all = 0;
            if(num[i] >= '0' && num[i] <= '9'){
                all += int(num[i]) - int('0');
            }else{
                all += (int(num[i]) - int('A') + 10);
            }
            all *= 16;
            if(num[i + 1] >= '0' && num[i + 1] <= '9'){
                all += int(num[i + 1]) - int('0');
            }else{
                all += (int(num[i + 1]) - int('A') + 10);
            }
            cout << char(all);
        }
        printf("\n");
    }
    return 0;
}