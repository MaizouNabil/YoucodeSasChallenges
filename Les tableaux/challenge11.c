#include <stdio.h>

int main() {
    int n,search,replace;

    printf("\ncombien de chiffres vas-tu saisir: ");
    scanf("%d", &n);

    int num[n];

    for (int i =0; i<n;i++){
    printf("Entrez une chiffre %d : ", (i+1));
    scanf("%d", &num[i]); }

    printf("\n quel element tu veux remplacer: ");
    scanf("%d", &search);

    if (search > n){
        printf("\n il ny a aucun element: ");
        return 1;}
    else{
        printf("\n Par quoi tu veux le remplacer ?: ");
        scanf("%d", &replace);}
    
    printf("\n cet element est %d: ", num[search-1]);
    num[search-1] = replace;

    printf("\n le remplacement est %d: ", num[search-1]);

    return 0;
}