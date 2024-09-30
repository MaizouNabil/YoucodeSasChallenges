#include <stdio.h>

int main() {
    char caractere;

  
    printf("Entrez un caractère : ");
    scanf("%c", &caractere);

   
    if (caractere >= 65 && caractere <= 90) { 
        printf("Le caractère est une majuscule.\n");
    } else {
        printf("Le caractère n'est pas une majuscule.\n");
    }

    return 0;
}
