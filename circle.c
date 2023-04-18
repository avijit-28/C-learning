#include<stdio.h>

int main(){
    int r;
    float ar,circum;
    printf("give radius of ccircle :");
    scanf("%d",&r);
    ar=3.14*r*r;
    printf("area of circle is %f \n ",ar);
    circum=2*3.14*r;
    printf("circumfrence of circle :%f",circum);

    return 0;
}