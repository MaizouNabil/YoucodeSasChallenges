#include <stdio.h>
#include <math.h> 

int main() {
    float a, b, c;
    float delta, x1, x2;

    printf("Entrez la valeur de a : ");
    scanf("%f", &a);
    printf("Entrez la valeur de b : ");
    scanf("%f", &b);
    printf("Entrez la valeur de c : ");
    scanf("%f", &c);

    if(a == 0){
        if(b == 0){
            printf("l'equation n'est pas valid \n ");
        }else{
            printf("l'equation aune solution :%.2f", -c/b);
        }
        return 0;
    }
    
    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("l'equation a une deux solution : x1 = %.2f et x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("equation a une seule solution : x = %.2f\n", x1);
    } else {
        printf("la solution a aucun soltution n'est pas reel\n");
    }
    
    
    return 0;
}
