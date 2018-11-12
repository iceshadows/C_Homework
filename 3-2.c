#include <stdio.h>
#include <math.h>
double check(double,double);
double check(double now,double limit){
    return ((now/limit)*100)-100;
}
int main(int argc, char const *argv[])
{
    int now,limit;
    scanf("%d %d",&now,&limit);
    // printf("%.2f%%",check(now,limit));
    
    if (check(now,limit)>=50) {
        printf("Exceed %.0f%%. License Revoked",check(now,limit));
    }
    else if(check(now,limit)>=10){
        printf("Exceed %.0f%%. Ticket 200",check(now,limit));
    }
    else printf("OK");
    return 0;
}

