#include<bits/stdc++.h>
using namespace std;    
string month[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int baga[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    char num[8]={0};
    for(int i = 0; i < 8; i++){
        cin >> num[i];
    }
    int a,b,c;
    a = 10*int(num[0]-'0')+int(num[1]-'0');
    b = 10*int(num[3]-'0')+int(num[4]-'0');
    c = 10*int(num[6]-'0')+int(num[7]-'0');
    int judge[3] = {0};
    int num1,num11,num111; // 小的年月日
    int num2,num22,num222; // 大的年月日
    if(c>a){
        num2 = c;
        num22 = a;
        num222 = b;
        num1 = a;
        num11 = b;
        num111 = c;
    }else{
        num1 = c;
        num11 = a;
        num111 = b;
        num2 = a;
        num22 = b;
        num222 = c;
    }
    if(num1 == num2){
        if(num11 > num22){
            swap(num11,num22);
            swap(num111,num222);
        }else if(num11 == num22){
            if(num111 > num222) swap(num111,num222);
        }
    }
    if(num1 % 4 == 0) baga[num11-1]++;
    if(num11 <= 12 && num111 <= baga[num11-1]){
        judge[0] = 1;
    }
    if(num1 % 4 == 0) baga[num11-1]--;
    if(num2 % 4 == 0) baga[num22-1]++;
    if(num22 <= 12 && num222 <= baga[num22-1]){
        judge[1] = 1;
    }
    if(num2 % 4 == 0) baga[num22-1]--;
    if(judge[0] == 1 && judge[1] == 1){
        int add = 0;
        if(num1 == num2){
            if(num11 == num22){
                if(num1 >= 10){
                    cout << month[num11 - 1] << " " << num111 <<", 20" << num1 << endl;
                }else{
                    cout << month[num11 - 1] << " " << num111 <<", 200" << num1 << endl;
                }
                return 0;
            }else{
                add += (baga[num11 - 1] - num111);
                add += num222;
                for(int i = num11; i < num22 - 1; i++){
                    add += baga[i];
                }
                if(num11 <= 2 && num22 >2) add ++;
            }
        }else{
            add += (baga[num11 - 1] - num111);
            for(int i = num11; i <= 11; i++){
                add += baga[i];
            }
            if(num1 % 4 == 0 && num11 <= 2) add++;
            for(int i = 0; i < num22 -1; i++){
                add += baga[i];
            }
            add += num222;
            if(num2 % 4 == 0 && num22 > 2) add++;
            for(int i = num1 + 1; i < num2; i++){
                if(i % 4 == 0){
                    add += 366;
                }else{
                    add += 365;
                }
            }
        }
        cout << add << endl;
    }else if(judge[0] == 1){
        if(num1 >= 10){
            cout << month[num11 - 1] << " " << num111 <<", 20" << num1 << endl;
        }else{
            cout << month[num11 - 1] << " " << num111 <<", 200" << num1 << endl;
        }
    }else{
        if(num2 >= 10){
            cout << month[num22 - 1] << " " << num222 <<", 20" << num2 << endl;
        }else{
            cout << month[num22 - 1] << " " << num222 <<", 200" << num2 << endl;
        }
    }
    return 0;
}