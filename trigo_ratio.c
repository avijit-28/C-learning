#include<stdio.h>
#include<math.h>
int main(){
    float angle,s,c,t,degree;
    printf("enter an angle :");
    scanf("%f",&angle);
    s=sin(angle);
    c=cos(angle);
    t=tan(angle);
    printf("trigometrics ratio of the angle sin%f,cos%f,tan%f is %f,%f,%f",angle,angle,angle,s,c,t);
    return 0;
}