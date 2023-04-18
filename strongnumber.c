#include<stdio.h>
int fac( int n);
int main(){
    int a;
    int orign,sum=0;
    printf("enter value of a :");
    scanf("%d",&a);
    // printf("value of a: %d",a);
    orign=a;
    // printf("\n %d",orign);
    while (orign!=0)
    {
        /* code */
        // printf("\n %d",a);
        int rem=orign%10;
        sum=sum+fac(rem);
        // printf("\n %d",sum);
        orign=orign/10;
    }
    if( a==sum){
        printf("it is strong number : %d \n",a);
    }
    else{
        printf("it is not a strong number : %d \n",a);
    }
    return 0;
}
int fac(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        // printf("\n value of n is : %d",n);
        fact=fact*i;
        // printf("\n factor is %d",fact);
    }
    return fact;
}