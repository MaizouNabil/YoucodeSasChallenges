#include <stdio.h>

#include <stdlib.h>

int main(){

    char caractere;

    printf("enter your caractere : ");

    scanf("%c",&caractere);


    if ((caractere >= 'A' && caractere <= 'Z')) {
        printf("Le caractère est une majuscule.\n");
    } else if (caractere >= 'a' && caractere <= 'z') {
        printf("Le caractère est une minuscule.\n");
    } else {
        printf("Le caractère n'est pas un alphabet.\n");
    }


    return 0;
}