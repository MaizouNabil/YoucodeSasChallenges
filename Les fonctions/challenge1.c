#include <stdio.h>

float somme (double a, double b){
    return a+b;
}


int main (){

    float a,b;

    printf("entrer le premier nombre: ");
    scanf("%f", &a);

    printf("entrer le deuxieme nombre: ");
    scanf("%f", &b);

    float result = somme(a,b);

    printf("le resultat est %.2f", result);

    return 0;
}