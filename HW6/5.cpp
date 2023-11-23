#include<bits/stdc++.h>
using namespace std;
int point[5]={-1};
int main(){
    while(1){
        int judge = 1;
        int judge1 = 1;
        string num;
        getline(cin,num);
        if(num == "End of file") return 0;
        int count = 1;
        for(int i = 0; i < (int)num.length(); i++){
            if(((int)num[i] < 48 || (int)num[i] > 57) && (int)num[i] != int('.')) judge = 0;
            if(num[i] == '.'){
                point[count] = i;
                count++;
            }
        }
        if(count == 1) judge1 = 0;
        for(int i = 0; i < 3; i++){
            if(point[i] + 1 == point[i+1]) judge1 = 0;
        }
//        printf("%d %d %d %d %d %d\n",judge,point[0],point[1],point[2],point[3],point[4]);
        if(judge == 0 || judge1 == 0){
            cout << "NO" << endl;
            continue;
        }
        point[4] = num.length();
        judge = 1;
        for(int i = 0; i < 4; i++){
            int add = 0;
            for(int j = point[i]+1; j < point[i+1]; j++){
                add = add * 10 + int(num[j])-int('0');
            }
            if(add >255 || add < 0){
                judge = 0;
            } 
        }
        if(judge == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}