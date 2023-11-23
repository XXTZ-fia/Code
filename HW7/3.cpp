#include<bits/stdc++.h>
using namespace std;
int num1[10000] = {0};
int num2[10000] = {0};
int main(){
    int k;
    cin >> k;
    int count = 2;
    num1[0] = 2;
    num1[1] = 3;
    for(int i = 4; i < 10000; i++){
        for(int j = 2; j <= int(sqrt(i)); j++){
            if(i%j == 0) break;
            if(j == int(sqrt(i))) {
                num1[count] = i;
                count++;
            }
        }
    }
    for(int i = 0; i < k; i++){
        for(int j = 0; j < 10000; j++){
            num2[j] = 0;
        }
        int a;
        cin >> a;
        int count1 = 0;
        int count2 = 0;
        while(1){
            if(num1[count1] > int(sqrt(a))) break;
            if(a % num1[count1] == 0){
                a /= num1[count1];
                num2[count2] = num1[count1];
                count2++;
         //       count1 = 0;
            }else{
                count1++;
            }
        }
        if(num2[0] != 0){
            for(int ii = 0; ii < count2; ii++){
                cout << num2[ii] << "*";
            }
            cout << a << endl;
        }else{
            cout << a << endl;
        }
    }
    return 0;
}