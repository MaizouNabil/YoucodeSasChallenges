#include <stdio.h>

int main() {
    int jour, mois, annee;
    char *moisNoms[] = {
        "Inconnu", "Janvier", "Fevrier", "Mars", "Avril", 
        "Mai", "Juin", "Juillet", "Aout", "Septembre", 
        "Octobre", "Novembre", "Décembre"
    };

    printf("Entrez une date au format jj/mm/aaaa : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);

    if (mois < 1 || mois > 12) {
        printf("Mois invalide.\n");
    } else {
        printf("%02d-%s-%d\n", jour, moisNoms[mois], annee);
    }

    return 0;
}
