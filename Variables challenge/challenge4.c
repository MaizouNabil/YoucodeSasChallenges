#include <stdio.h>

#include <stdlib.h>


int main(){

    float km, ms;

    printf("enter la vitess  en kilometres : ");
    scanf("%f",&km);


    ms = km * 0.27778;

    printf("la vitess en metre par second : %.2f", ms);

    return 0;
}