#include <stdio.h>
#include <math.h>
double caluate_length(double,double,double,double);
int main(){
    double x1,x2,x3,y1,y2,y3;
    double s;
    double area = 0;
    double a = 0,b = 0, c = 0;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    a = caluate_length(x1,y1,x2,y2); b = caluate_length(x2,y2,x3,y3);c = caluate_length(x3,y3,x1,y1);
    // printf("%.2f %.2f %.2f\n",c1,c2,c3);//Debug
    s=(a+b+c)/2;
    area=sqrtf(s*(s-a)*(s-b)*(s-c));
    if(area<=0){
        printf("Impossible");
    }
    else {
        printf("L = %.2f, A = %.2f",a+b+c,area);
    }
    return 0;
}
double caluate_length(double x1 ,double y1,double x2 ,double y2){
    return sqrtf(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
}