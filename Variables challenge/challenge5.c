#include <stdio.h>


#include <stdlib.h>
int main() {

    float celsius;

    printf("\nEntrez la temperature en celsius: ");
    scanf("%f", &celsius);

    if (celsius >= 100 ) {
        printf("\nl'état de l'eau à cette température %.2f est: GAZ", celsius);
    } else if ( celsius>=0) {
        printf("\nl'état de l'eau à cette température %.2f est: Liquide", celsius);
    } else{
         printf("\nl'état de l'eau à cette température %.2f est: Solide", celsius);
    }

    return 0;
}