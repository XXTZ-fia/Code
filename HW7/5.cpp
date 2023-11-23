#include<bits/stdc++.h>
using namespace std;
int n1[1000] = {0};
int n2[1000] = {0};
int result[1000] = {0};
void sub(int l1, int l2){
    for(int i = 1; i <= l1; i++){
        n1[l1 - i] -= n2[l2 - i];
        if(n1[l1 - i] < 0){
            n1[l1 - i] += 10;
            n1[l1 - i + 1]--;
        }
    }
}

int judge(int len1, int len2){
    for(int i = 1; i <= len2; i++){
        if(n1[len1 - i] > n2[len2 - i]){
            break;
        }
        if(n1[len1 - i] < n2[len2 - i]){
            return 1;
        }
    }
    return 0;
}


int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string num1;//被除
        string num2;//除
        int len1 = 0, len2 = 0;
        cin >> num1 >> num2;
        if(num1[0] == '0'){
            cout<<0<<endl;
            continue;
        }
        len1 = num1.length();
        len2 = num2.length();

        for(int j = 0; j < len1; j++){
            n1[j] = num1[len1 - j - 1] - '0'; 
        }
        for(int j = 0; j < len2; j++){
            n2[j] = num2[len2 - j - 1] - '0'; 
        }

        int count = 0;
        while(len1 >= len2){
            if(n1[len1-1] == 0){
                    len1--;
                    count++;
                    continue;
                }
            int jj = judge(len1, len2);
            if(jj == 0){
                sub(len1, len2);
                result[count]++;
            }else{
                count++;
                len1--;
                sub(len1, len2);
                result[count]++;
                if(n1[len1] > 0){
                    len1++;
                    count--;
                }
            }
        }
        int jj = 0;
        if(result[0] == 0) jj++;
        for(int j = jj; j < count; j++){
            cout << result[j];
        }
        printf("\n");
        
        for(int j = 0; j < 1000; j++){
            n1[j] = 0;
            n2[j] = 0;
            result[j] = 0;
        }
    }


}