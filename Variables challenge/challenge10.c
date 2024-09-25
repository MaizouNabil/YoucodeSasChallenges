#include <stdio.h>
#include <math.h>

#define PI 3.14

int main (){

    float rayon , volume;

    printf("entrer le rayon : \n");

    scanf("%f",&rayon);


    volume = (4.0 / 3.0) * PI * pow(rayon ,3);


printf("the rayon of the circle is : %.2f", volume);

    return 0;
}