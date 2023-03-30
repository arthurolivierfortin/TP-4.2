#include<stdio.h>
#include<stdlib.h>
#include "../src/util.h"

#define CHECK_EXERCISE1Q1 0
#define CHECK_EXERCISE1Q2 0
#define CHECK_EXERCISE2Q9 1
#define CHECK_EXERCISE2Q10 1
#define CHECK_EXERCISE2Q11 1
#define CHECK_EXERCISE2Q13 1
#define CHECK_EXERCISE2Q14 1





CelluleClient *listeClient;
CelluleVoiture *listeVoiture;



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

        if (CHECK_EXERCISE2Q9) {
                listeClient = createCelluleClient();
                
                
        }

        if (CHECK_EXERCISE2Q10) {
                
                int compte=0, choix = 0, i=0;
                CelluleClient *p =listeClient;
                while(p->suivant!=NULL){
                        p = p->suivant;
                        compte+=1;
                }

                printf("Il y a %d client dans le dossier, lequel voulez-vous modifier?\n", compte);
                scanf("%d", &choix);
                p =listeClient;
                for(i=0;i<(choix-1);i++){
                        p=p->suivant;
                }
                Client clientH = {8000, 2003, "Fortin", "Arthur-Olivier"};
                updateCelluleClient(clientH, p);
                compte=0;
                choix=0;

        }

        if (CHECK_EXERCISE2Q11){

                CelluleClient *client2 = createCelluleClient();
                addCelluleClient(listeClient, client2);
        }

        if (CHECK_EXERCISE2Q13) {
                listeVoiture = createCelluleVoiture();

        }

        if (CHECK_EXERCISE2Q14) {

                int compte=0, choix = 0, i=0;
                CelluleVoiture *J =listeVoiture;
                while(J->suivante!=NULL){
                        J = J->suivante;
                        compte+=1;
                }

                printf("Il y a %d voiture dans le dossier, lequel voulez-vous modifier?\n", compte);
                scanf("%d", &choix);
                J =listeVoiture;
                for(i=0;i<(choix-1);i++){
                        J=J->suivante;
                }
                Client clientH = {8000, 2003, "Fortin", "Arthur-Olivier"};
                Voiture vr = {4000, 2019, "Honda", "3AE3Q2", "rouge"};
                Assurance ar = {2000, 2015, "Tout"};
                updateCelluleVoiture(vr, ar, 80003, J, listeClient);
                compte=0;
                choix=0;
        }

        if (CHECK_EXERCISE2Q11){

                CelluleClient *client2 = createCelluleVoiture();
                addCelluleVoiture(listeVoiture, client2);
        }

}