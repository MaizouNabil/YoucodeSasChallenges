#include <stdio.h>

int main() {
    float moyenne;

    
    printf("Entrez votre moyenne : ");
    scanf("%f", &moyenne);

    
    if (moyenne < 10) {
        printf(" votre mention est : Recalé\n");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("votre mention est : Passable\n");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("votre mention est : Assez Bien\n");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("votre mention est : Bien\n");
    } else { 
        printf("votre mention est : Très Bien\n");
    }

    return 0;
}
