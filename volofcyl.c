#include<stdio.h>

int main(){
    // cylinder :- radius,height,vol
    float r,h1,vol;
    printf("enter the radius and height of cylinder : \n");
    scanf("%f,%f",&r,&h1);
    vol=3.14*r*r*h1;
    printf("volume of cylinder is %f",vol);
    //volume of cuboid
    int l,b,h,vol1;
    printf("\n length,bredth and height of cuboid: ");
    scanf("%d,%d,%d",&l,&b,&h);
    vol1=l*b*h;
    printf("\n volume of cuboid: %d",vol1);
    float n_vol;
    // difference btw two volumes
    n_vol=vol1-vol;
    printf("\n difference btw the volume is %f",n_vol);
    return 0;
}