#include <stdio.h>

#include <stdlib.h>



int main(){

    int number ;

    printf("enter a number :");
    scanf("%d",&number);

    int revnumber = 0;

    while(number){

        revnumber = revnumber * 10 + number %10;

        number /= 10;
    }
        printf("the reverse number is : %d", revnumber);
    
}