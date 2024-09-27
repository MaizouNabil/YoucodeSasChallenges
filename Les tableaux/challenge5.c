#include <stdio.h>

int main() {
    int n, maxnum;

    printf("\nenter how many number you wann ause: ");
    scanf("%d", &n);

    int num[n];

    for (int i =0; i<n;i++){
    printf("Entrez une chiffre %d : ", (i+1));
    scanf("%d", &num[i]); 
    
    
    }

    maxnum = num[0];
    for(int i = 1; i < n; i++) {
        if(num[i] < maxnum) {
            maxnum = num[i];}}

    printf("le plus grand element est: %d", maxnum);

    return 0;
}