#include<bits/stdc++.h>
using namespace std;
char num1[7][50] = {
    '*','*','*','*','*',  ' ',' ',' ',' ','*',  '*','*','*','*','*',  '*','*','*','*','*',  '*',' ',' ',' ','*',  '*','*','*','*','*',  '*','*','*','*','*',  '*','*','*','*','*',  '*','*','*','*','*',  '*','*','*','*','*',
    '*',' ',' ',' ','*',  ' ',' ',' ',' ','*',  ' ',' ',' ',' ','*',  ' ',' ',' ',' ','*',  '*',' ',' ',' ','*',  '*',' ',' ',' ',' ',  '*',' ',' ',' ',' ',  ' ',' ',' ',' ','*',  '*',' ',' ',' ','*',  '*',' ',' ',' ','*',
    '*',' ',' ',' ','*',  ' ',' ',' ',' ','*',  ' ',' ',' ',' ','*',  ' ',' ',' ',' ','*',  '*',' ',' ',' ','*',  '*',' ',' ',' ',' ',  '*',' ',' ',' ',' ',  ' ',' ',' ',' ','*',  '*',' ',' ',' ','*',  '*',' ',' ',' ','*',
    '*',' ',' ',' ','*',  ' ',' ',' ',' ','*',  '*','*','*','*','*',  '*','*','*','*','*',  '*','*','*','*','*',  '*','*','*','*','*',  '*','*','*','*','*',  ' ',' ',' ',' ','*',  '*','*','*','*','*',  '*','*','*','*','*',
    '*',' ',' ',' ','*',  ' ',' ',' ',' ','*',  '*',' ',' ',' ',' ',  ' ',' ',' ',' ','*',  ' ',' ',' ',' ','*',  ' ',' ',' ',' ','*',  '*',' ',' ',' ','*',  ' ',' ',' ',' ','*',  '*',' ',' ',' ','*',  ' ',' ',' ',' ','*',
    '*',' ',' ',' ','*',  ' ',' ',' ',' ','*',  '*',' ',' ',' ',' ',  ' ',' ',' ',' ','*',  ' ',' ',' ',' ','*',  ' ',' ',' ',' ','*',  '*',' ',' ',' ','*',  ' ',' ',' ',' ','*',  '*',' ',' ',' ','*',  ' ',' ',' ',' ','*',
    '*','*','*','*','*',  ' ',' ',' ',' ','*',  '*','*','*','*','*',  '*','*','*','*','*',  ' ',' ',' ',' ','*',  '*','*','*','*','*',  '*','*','*','*','*',  ' ',' ',' ',' ','*',  '*','*','*','*','*',  '*','*','*','*','*'
};
int num2[6] = {0};
int main(){
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        int aa = a;
        int count = 0;
        while(a != 0){
            num2[count] = a % 10;
            a /= 10;
            count++;
        }
        count--;
        printf("%d:\n", aa);
        for(int i = 0; i < 7; i++){
            for(int j = count; j >= 0; j--){
                for(int k = 5 * num2[j]; k < 5 * num2[j] + 5; k++){
                    cout << num1[i][k];
                }
                printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}