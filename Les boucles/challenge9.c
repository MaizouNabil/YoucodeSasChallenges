#include <stdio.h>

#include <stdlib.h>

int main (){

    int number ;


    printf(" enter a   number :");
    scanf("%d",&number);



    int lastnumber = 0;

    lastnumber = lastnumber *10 +  number %10;


    printf("the last number of the number you enter is : %d", lastnumber);
    return 0 ;
}