#include<bits/stdc++.h>
using namespace std;

int num1[1000] = {0};
int num2[1000] = {0};
int num3[2000] = {0};

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int lenA = a.length(), lenB = b.length();

        // 将数字字符串反转存储到数组中
        for(int i = 0; i < lenA; i++){
            num1[i] = a[lenA - 1 - i] - '0';
        }
        for(int i = 0; i < lenB; i++){
            num2[i] = b[lenB - 1 - i] - '0';
        }

        // 逐位相乘
        for(int i = 0; i < lenA; i++){
            for(int j = 0; j < lenB; j++){
                num3[i + j] += num1[i] * num2[j];
                if(num3[i + j] >= 10){
                    num3[i + j + 1] += num3[i + j] / 10;
                    num3[i + j] %= 10;
                }
            }
        }

        // 找到最高非零位
        int highest = lenA + lenB - 1;
        while(highest > 0 && num3[highest] == 0){
            highest--;
        }

        // 输出结果
        for(int i = highest; i >= 0; i--){
            cout << num3[i];
        }
        cout << endl;

        // 清除数组中使用过的部分
        fill(num1, num1 + lenA, 0);
        fill(num2, num2 + lenB, 0);
        fill(num3, num3 + highest + 1, 0);
    }
    return 0;
}
