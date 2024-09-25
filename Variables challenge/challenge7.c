#include <stdio.h>

int main() {
    float numero1, numero2, numero3; 
    float resultas; 
    float poid1 = 2.0, poid2 = 3.0, poid3 = 5.0;

    printf("\nEntrez le premier nombre: ");
    scanf("%f", &numero1);
    printf("\nEntrez le deuxieme nombre: ");
    scanf("%f", &numero2);
    printf("\nEntrez le troisieme nombre: ");
    scanf("%f", &numero3);



    resultas = ((numero1 * poid1  + numero2 * poid2 +  numero3 * poid3) / (poid1 + poid2 + poid3));



    printf("the result of this caluculation is : %.2f", resultas);



    return 0;
}