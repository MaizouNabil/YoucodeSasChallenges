#include <stdio.h>

int main() {
    float nombre;

    printf("Entrez un nombre : ");
    scanf("%f", &nombre);

    if (nombre > 0) {
        printf("Le nombre est positif.\n");
    } else if (nombre < 0) {
        printf("Le nombre est négatif.\n");
    } else {
        printf("Le nombre est zéro.\n");
    }

    return 0;
}
