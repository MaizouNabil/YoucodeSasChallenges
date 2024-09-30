#include <stdio.h>

int main() {
    int number;

    printf("Entrez un nombre : ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Le nombre %d est pair.\n", number);
    } else {
        printf("Le nombre %d est impair.\n", number);
    }

    return 0;
}
