#include<stdio.h>
#include<math.h>
int main(){
    int si,b;
    printf("enter the value of b");
    scanf("%d",&b);
    // float p,r,t,si,ci;
    // printf("enter the value of p,r and t : ");
    // scanf("%f,%f,%f",&p,&r,&t);
    // // si=(p*r*t)/100;
    // // printf("simple intrest will be : %f",si);
    // ci=p*(pow(1 + r/100,t)-1);
    // printf("compound intrest will be : %f",ci);
    si=b*0.12;
    printf("\n value of si %d",si);
    return 0;
}