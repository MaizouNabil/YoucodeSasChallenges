#include <stdio.h>
int main() {    


    char nom[50];
    char prenom[50];
    char email[100];
    char sex;

    int age;



    printf("\nenter your name :");

    scanf("%49s",&nom);

     printf("\nenter your prenom :");

    scanf("%49s",&prenom);

   printf("\n enter your Gender (M or F): ");
    scanf(" %c", &sex);

    printf("\nEnter your email: ");
    scanf("%s", &email); 


     printf("\nenter your age :");

    scanf("%d",&age);



     printf("Your name is %s\n", nom);
    printf("Your last name is %s\n", prenom);
    printf("Your gender is %c\n", sex);
    printf("Your email is %s\n", email);
    printf("Your age is %d\n", age); 


    return 0;
}
