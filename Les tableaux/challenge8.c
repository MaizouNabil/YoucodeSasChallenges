#include <stdio.h>

int main() {
    int n, i;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tableauOriginal[n], tableauCopie[n];

    for (i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tableauOriginal[i]);
    }

    for (i = 0; i < n; i++) {
        tableauCopie[i] = tableauOriginal[i];
    }

    printf("\nTableau original : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", tableauOriginal[i]);
    }

    printf("\nTableau copie : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", tableauCopie[i]);
    }

    printf("\n");

    return 0;
}
