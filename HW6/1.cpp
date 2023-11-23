#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        double a;
        double num1 = 1.0;
        cin >> a;
        if(a < 0.0){
            cout<< "error" << endl;
            continue;
        }
        double num2 = a;
        double num3 = num1;
        while(abs(num2 - num3) > 0.00001){
            num2 = (num1 + a/num1)/2.00;
            num3 = num1;
            num1 = num2;
        }
        printf("%.5lf\n",num2);
    }
    

    return 0;
}