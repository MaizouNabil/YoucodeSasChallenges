#include <stdio.h>

int main() {
    int n, i;

    printf("Entrez le nombre d'elements  : ");
    scanf("%d", &n);

    int tableau[n];

    for (i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("\nTableau inverse : \n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", tableau[i]);
    }

    printf("\n");

    return 0;
}
