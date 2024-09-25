#include <stdio.h>

#include <stdlib.h>


int main(){

    float kelomiter , yards;

    printf("enter a la distance on kilometrs : ");
    scanf("%f",&kelomiter);


    yards = kelomiter * 1093.61;

    printf("la distance en yard est : %.2f", yards);

    return 0;
}