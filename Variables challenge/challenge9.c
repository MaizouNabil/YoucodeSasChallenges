#include <stdio.h>

#include <math.h>
#include <stdlib.h>


int main (){

    float x1 , y1 , z1;

    float x2 , y2 , z2;


    float distance3d;


    printf("entrer les coordernees de les points (x1 et Y1 ET z1) :\n");

    scanf("%f %f %f",&x1,&y1,z1);




    printf("entrer les coordonees de les points (x2 et y2 et z2) :\n");

    scanf("%f %f %f",&x2,&y2,&z2);



    distance3d = sqrt(pow(x2 - x1 ,2) + pow(y1 - y2 ,2) + pow(z1 - z2 ,2));

    printf("la distance dans un espace 3d est : %.2f", distance3d);



   return 0;

}