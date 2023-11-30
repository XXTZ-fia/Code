#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        double num;
        scanf("%lf", &num);
        if(int(num) < 0){
            printf("ERROR\n");
            continue;
        }
        num = sqrt(num);
        printf("%.2lf\n", num);
    }
    return 0;
}