#include <stdio.h>
int main(){
    int num,orgn,rem,sum=0;
    printf("enter any number :\n");
    scanf("%d",&num);
    orgn=num;
    while (orgn>0)
    {
        rem=(orgn % 10);  //remainder of nummber; we use % to find the remainder//
        sum=sum+(rem*rem*rem) ;
        // printf("\n %d",sum);
        orgn=orgn/10 ; // num ko hi chnage kar rha hu number ke andar//

        /* code */
    }
    if (num==sum){
        printf("\n it is an armstrong number");

    }
    else{
        printf("\n It is not an armstrong number");
    }
    return 0;
}