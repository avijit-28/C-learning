#include<stdio.h>

int main(){
    int l,b,h,vol;
    printf("length,bredth and height of cuboid: ");
    scanf("%d,%d,%d",&l,&b,&h);
    vol=l*b*h;
    printf("volume of cuboid: %d",vol);
    return 0;
}