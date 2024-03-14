#include <stdio.h>
void greet(int age) {
    if ( age <= 10 ){
        printf("Good Evening");
    }else{
        printf("Good Morning");
    }
    
}
int main() {
   greet(9);
   

    return 0;
}