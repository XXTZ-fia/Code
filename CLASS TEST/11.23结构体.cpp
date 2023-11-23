#include <stdio.h>
#include <string.h>
#include <math.h>

struct point{
    double x, y;
};

/*  C语言写法
    typedef struct point {
        double x, y;
    }point;
*/

double distance(point p1, point p2){
    double num = sqrt((p1.x - p2.x)*(p1.x - p2.x) +(p1.y - p2.y)*(p1.y - p2.y));
    return num;
}



int main(){
    point p1, p2;
    scanf("%lf%lf%lf%lf", &p1.x, &p1.y, &p2.x, &p2.y);
    double result = distance(p1, p2);
    printf("%.2lf",result);
    return 0;
}