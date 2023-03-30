#include<stdio.h>
#include<stdlib.h>
#include "../test/test_perso.h"


extern Etudiant;


void main(){

    struct client{
        char nom[50];
    };

    typedef struct client Client;

    Client client1 = {"Arthur"};
    printf("%s", client1.nom);
    printf("\n");

    char x[] = {"Charles"};
    strcpy(client1.nom, x);

    printf("%s", client1.nom);
    printf("\n");


    
}

