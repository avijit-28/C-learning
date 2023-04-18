#include<stdio.h>

int main(){
    int num;
    printf("enter an integer number : ");
    scanf("%d",&num);
    if (num>0){
        printf("%d is positive",num);
    }
    else if(num<0){
        printf("%d is negetive",num);
    }
    else{
        printf("%d is zero",num);
    }
    return 0;
}