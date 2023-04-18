#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,D;
    printf("enter the value of a,b and c : ");
    //a should not be equal to 0
    scanf("%d,%d,%d",&a,&b,&c);
    D=(b*b)-4*a*c;
    printf("the value of D is : %d \n",D);
    if (D==0){
        printf("real and equal roots \n");
    }
    else if(D>0){
        printf("real and unequal roots \n");
    }
    else{
        printf("unequal and imaginary \n");
    }
    return 0;
}