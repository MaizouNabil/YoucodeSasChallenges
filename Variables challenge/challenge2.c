#include <stdio.h>

#include <stdlib.h>


int main(){

    float kelvin , celsius;

    printf("enter a degree with celsius : ");
    scanf("%f",&celsius);


    kelvin = celsius + 273.15;

    printf("the degree with kelvin is : %.2f", kelvin);

    return 0;
}