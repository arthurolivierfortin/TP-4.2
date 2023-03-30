#include "stdlib.h"
#include<string.h>
#include<math.h>
#include <assert.h>
#include <stdio.h>
#include "../src/util.h"


int * createTable(int taille_T){
    int *p, i;
    p = (int*)malloc(taille_T*sizeof(int));

    for(i=0;i<taille_T;i++){
        printf("Entrez la %d valeur du tableau\n", i);
        scanf("%d",&p[i]);
        printf(" p[i] = %d\n", p[i]);
    }
    printf("p = %d\n", p);
    return p; // ici ça retourn le contenu
}

int * concateOrder(int * T1, int taille_T1, int * T2, int taille_T2){
    int i, j=0, suite=0;
    int taille_T3 = (taille_T1+taille_T2);
    int *T3;
    T3 = (int*)malloc(sizeof(int)*(taille_T3));
    

    for(i=0;i<taille_T1;i++){
        T3[j]=T1[i];
        j+=1;
    }

    for(i=0;i<taille_T2;i++){
        T3[j]=T2[i];
        j+=1;
    }

    printf("T3 avant permutation = [");
    for(i=0;i<taille_T3;i++){
        printf("%d, ", T3[i]);
    }
    printf("]\n");

    int T;
    
    while(1){
        for(i=0;i<(taille_T3);i++){
            if(i==(taille_T3-1)){
                suite=1;
                break;
            }
            if(T3[i]>T3[i+1]){
                T=T3[i];
                T3[i]=T3[i+1];
                T3[i+1]=T;
                break;
            }
        }
        if(suite==1){
            break;
        }
    }

    printf("T3 après permutation = [");
    for(i=0;i<taille_T3;i++){
        printf("%d, ", T3[i]);
    }
    printf("]\n");

    return *T3;
}

void strmycpy(char S[], char T[]) {
  char *p, *q;
  p = T; 
  q = S;
  while(*p != '\0' ) {
                       *q = *p;
                        q++;
                        p++;
            }
    *q = '\0';
}

CelluleClient * createCelluleClient(){
    Client client1;
    char nomClient[50], prenomClient[50];
    
    printf("Entrez le nom du client\n");
    scanf("%s", nomClient);

    printf("Entrez l'id du client\n");
    scanf("%d", &client1.id);

    printf("Entrez le prenom du client\n");
    scanf("%s", prenomClient);

    printf("Entrez la date de naissance du client\n");
    scanf("%d", &client1.dateNaissance);

    strmycpy(client1.nom, nomClient);
    strmycpy(client1.prenom, prenomClient);

    // Allouer et initialiser une nouvelle cellule client
    CelluleClient *newCelluleClient = (CelluleClient *)malloc(sizeof(CelluleClient));
    newCelluleClient->client = client1;
    newCelluleClient->suivant = NULL;
    
    return newCelluleClient;
}

void updateCelluleClient(Client cl, CelluleClient* cell){

    strmycpy(cell->client.nom,cl.nom);
    strmycpy(cell->client.prenom,cl.prenom);
    strmycpy(cell->client.id,cl.id);
    strmycpy(cell->client.id,cl.dateNaissance);
}

void addCelluleClient(CelluleClient *listeClient, CelluleClient*cell){

    CelluleClient *newClient = (CelluleClient*)malloc(sizeof(CelluleClient));

    newClient->client = cell->client;
    newClient->suivant = cell->suivant;
}

CelluleVoiture * createCelluleVoiture(){

    Voiture véhicule;
    Assurance assurance;

    char marque[80], numeroMatricule[80], couleur[80];

    printf("Entrez l'id de la voiture\n");
    scanf("%d", &véhicule.id);

    printf("Entrez la date de fabrication de la voiture\n");
    scanf("%d", &véhicule.dateFabrication);

    printf("Entrez la marque de la voiture\n");
    scanf("%s", marque);

    printf("Entrez le numero de matricule de la voiture\n");
    scanf("%s", numeroMatricule);

    printf("Entrez la couleur de la voiture\n");
    scanf("%s", couleur);

    strmycpy(véhicule.Marque, marque);

    strmycpy(véhicule.numeroMatricule, numeroMatricule);

    strmycpy(véhicule.Couleur, couleur);

    CelluleVoiture *nouveauVéhicule = (CelluleVoiture*)malloc(sizeof(CelluleVoiture));

    nouveauVéhicule->voiture = véhicule;

    int type[80];

    printf("Entrez la date de début de votre assurance\n");
    scanf("%d", &assurance.dateDebut);

    printf("Entrez la date de fin de votre assurance\n");
    scanf("%d", &assurance.dateFin);

    printf("Entrez la date de début de votre assurance\n");
    scanf("%s", type);

    strmycpy(assurance.type, type);

    nouveauVéhicule->assurance = assurance;

    return nouveauVéhicule;
}
