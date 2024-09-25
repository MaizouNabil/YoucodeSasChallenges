#include <stdio.h>

#include <stdlib.h>

int main(){

    float numero1 , numero2;

    printf("enter the first number: ");

    scanf("%f",&numero1);
    printf("enter the second number: ");

    scanf("%f",&numero2);


float sum = numero1 + numero2 ;

float multiplication = numero1 *  numero2;

float division = numero1 / numero2;

float minus = numero1 - numero2 ;



printf("a + b = %.2f\n",sum);
printf("a * b = %.2f\n",multiplication);
printf("a / b = %.2f\n",division);
printf("a - b = %.2f\n",minus);

}