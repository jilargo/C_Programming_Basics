#include <stdio.h>

int main() {
   int age;
   printf("Enter your age: ");
   scanf("%d", &age);
   
  printf(age >= 18 ? "You can vote" : "you cannot vote:");
   

    return 0;
}