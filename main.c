#include <stdio.h>
#include <stdlib.h>

int main()
{
     char nom[20];
   char prenon[20];
   int age;
   char sexe[20];
   char telephone[20];

   printf("entrer votre nom:");
   scanf("%s",&nom);

   printf("entrer votre prenon:");
   scanf("%s",&prenon);

   printf("entrer votre age:");
   scanf("%d", &age);

   printf("entrer votre sexe:");
   scanf("%s" , &sexe);

   printf("entrer votre telephone:");
   scanf("%s" ,&telephone);

    printf("\nnom : %s\n", nom);
    printf("prenon : %s\n", prenon);
    printf("age : %d\n", age);
    printf("sexe : %s\n", sexe);
    printf("telephone : %s \n", telephone);

    return 0;
}
