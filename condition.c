#include <stdio.h>

int main() {
   int age;
   printf("Enter your age: ");
   scanf("%d", &age);
   
   if (age >= 18){
       printf("You are allowed to vote! ");
   }else{
       printf("Invalid Voters! ");
   }
   

    return 0;
}