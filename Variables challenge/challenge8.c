#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main() {
    float a, b, c; 
    float geometric;

    printf("entrer le numero 1: ");
    scanf("%f", &a);

    printf("entrer le numero 2 :");
    scanf("%f", &b);

    printf("entrer le numero 3 : ");
    scanf("%f", &c);

    
    geometric = cbrt(a * b * c); 
    
    printf("the result is : %.2f\n", geometric);

    return 0;
}