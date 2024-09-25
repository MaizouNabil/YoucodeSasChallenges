#include <stdio.h>
#include <stdlib.h>



int main(){


    float largeur, surface , longueur;

    printf("enter la largeur :\n");
    scanf("%f",&largeur);
    
    printf("enter la longueur :\n");
    scanf("%f",&longueur);


    surface =largeur * longueur;

    printf("the result of this calculation is : %.2f",surface);


    return 0;
}