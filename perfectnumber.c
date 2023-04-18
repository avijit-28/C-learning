#include <stdio.h>
int main(){
    int a,sum=0;
    printf("enter any number :");
    scanf("%d",&a);
    for (int i=1;i<=a/2;i++)
    {
        /* code */
        if (a%i==0){
            sum=sum+i;
            printf("%d \n",sum);
        }
    }
    if (a==sum){
        printf("the number is perfect : %d",a);
    }
    else{
        printf("the number is not perfect : %d",a);
    }

    
    return 0;
}