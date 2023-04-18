#include <stdio.h>

void printhello();
void namastey();
void bonjour();
 

//function define
 int main(){
    printhello();

   printf("enter f for french or i for indian :");
    char ch;
    scanf("%c",&ch);
    if (ch == 'i'){
        namastey();
    } else{
        bonjour();
    }
   return 0;
 }

//function call

 void printhello(){
    printf("Hello!!! my name is Avijit\n");
 }
 
 void namastey(){
    printf("Namastey!!\n");
 }
 void bonjour(){
    printf("Bonjour!!!");
 }