#include <stdio.h>

int main() {
    int number, etap1, etap2, etap3, etap4, reversed;

    printf("Enter a four-digit integer: ");
    scanf("%d", &number);

        if (number < 1000 ||number> 9999) {
        printf("\nEntrez un nombre de 4 chiffres");
        return 1;
    }


    etap1 = number % 10;              
    etap2 = (number / 10) % 10;    
    etap3 = (number / 100) % 10;   
    etap4 = number / 1000;      

  
    reversed = etap1 * 1000 + etap2 * 100 + etap3 * 10 + etap4;

  
    printf("The reversed number is: %d\n", reversed);

    return 0;
}
