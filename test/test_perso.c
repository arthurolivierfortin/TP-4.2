#include<stdio.h>
#include<stdlib.h>
#include "../test/test_perso.h"


extern Etudiant;


void main(){

    char x[50];
    printf("Entrez le nom\n");
    scanf("%s", x);
    printf("%d", sizeof(x));
    printf("\n");
    printf("%d", strlen(x));
    printf("\n");
    printf("%s", x);
    printf("\n");
    
}