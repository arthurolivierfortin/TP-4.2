#include<stdio.h>
#include<stdlib.h>
#include "../src/util.h"

#define CHECK_EXERCISE1Q1 0
#define CHECK_EXERCISE1Q2 0
#define CHECK_EXERCISE2Q8 1





extern CelluleClient *listeClient;
extern CelluleVoiture *listeVoiture;



void main() {

        if (CHECK_EXERCISE1Q1) {
                int taille_T=12;
                int* pT1;

                pT1 = createTable(taille_T);
                printf("pT1 = %ld\n", pT1);

                
        }

        if (CHECK_EXERCISE1Q2) {
                

                int taille_T1, taille_T2;

                printf("Entrez la taille pour le tableau un:\n");
                scanf("%d",&taille_T1);

                printf("Entrez la taille pour le tableau deux:\n");
                scanf("%d",&taille_T2);

                int* T1 = createTable(taille_T1);
                int* T2 = createTable(taille_T2);

                printf("T1 = %d, T2 = %d\n", T1, T2);

                concateOrder(T1, taille_T1, T2, taille_T2);

                

        }

        if (CHECK_EXERCISE2Q8) {
                listeClient = createCelluleClient();

        }


}