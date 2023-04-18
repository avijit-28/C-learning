#include<stdio.h>

int main(){
    int price,n;
    float tax,discount,act_price,total_price;
    printf("price of item : ");
    scanf("%d",&price);
    printf("\n no. of itmes :");
    scanf("%d",&n);
    tax=price*0.12;
    printf("\n %f",tax);
    discount=(price+tax) * 0.1;
     printf("\n %f",discount);
    act_price=(price+tax)-discount;
    printf("\n the actual amount of that item is : %f",act_price);
    total_price=n*act_price;
    printf("\n total price of %d items is : %f",n,total_price);



    return 0;
}