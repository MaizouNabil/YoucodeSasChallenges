#include <stdio.h>

int main() {
    int choix;
    int annees;
    int mois, jours, heures, minutes, secondes;

    printf("Entrez une anneess : ");
    scanf("%d", &annees);

    mois = annees * 12;
    jours = annees * 365;
    heures = jours * 24;
    minutes = heures * 60;
    secondes = minutes * 60;

    printf("\nChoisissez une option pour la conversion :\n");
    printf("1. Convertir en Mois\n");
    printf("2. Convertir en Jour\n");
    printf("3. Convertir en Heure\n");
    printf("4. Convertir en Minute\n");
    printf("5. Convertir en Seconde\n");

    printf("\nEntrez votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("%d annees = %d mois\n", annees, mois);
            break;
        case 2:
            printf("%d annees = %d jours\n", annees, jours);
            break;
        case 3:
            printf("%d annees = %d heures\n", annees, heures);
            break;
        case 4:
            printf("%d annes = %d minutes\n", annees, minutes);
            break;
        case 5:
            printf("%d annees = %d secondes\n", annees, secondes);
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }

    return 0;
}
