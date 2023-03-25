#include "../src/util.h"
#include "stdlib.h"
#include "malloc.h"
#include<string.h>
#include<math.h>
#include <assert.h>


// declaration de la liste
extern Cellule * liste;

//=====================================================//
//=                       Exercice 1                  =//
//=====================================================//

//=====================================================//
//=                     Question 1                    =//
//=====================================================//

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

// Exercice 1 Q1

Etudiant initialiseClient(int numero, char nom [], char prenom []) {
    Etudiant e;
    e.numero = numero;
    strmycpy(e.nom, nom);
    strcpy(e.prenom, prenom);
    return e;
}

//=====================================================//
//=                       Question 3                  =//
//=====================================================//

void afficheClient(Etudiant e) {
      printf("L'étudiant %s %s a le numéro %d\n", e.nom, e.prenom, e.numero);
}


//=====================================================//
//=                       Exercice 2                  =//
//=====================================================//

//=====================================================//
//=                        Question 2                 =//
//=====================================================//

Cellule * initialiseCellule() {
    Cellule * cell = (Cellule*) malloc(sizeof(Cellule));
    cell->suivant = NULL;
    return cell;
}

//=====================================================//
//=                        Question 3                 =//
//=====================================================//

boolean estVide(Cellule * L) {

    if (L == NULL)
          return true;

    return false;
}

//=====================================================//
//=                        Question 4                 =//
//=====================================================//

Cellule * creerCell(Etudiant e) {
    Cellule * cell = initialiseCellule();
    cell->etudiant = e;
    return cell;
}

//=====================================================//
//=                        Question 5                 =//
//=====================================================//

void ajouterAuDebut(Cellule *c) {
c->suivant = liste;
liste = c;
}

//=====================================================//
//=                        Question 6                 =//
//=====================================================//

void ajouterEnFin(Cellule * c) {
    Cellule * p = liste;
    while (p->suivant != NULL)
        p = p->suivant;
    p->suivant = c;
}


//=====================================================//
//=                        Question 7                 =//
//=====================================================//

int nbEtudiants(Cellule * L) {
    int nbClient = 0;
    Cellule * p = L;
    while (p != NULL) {
          nbClient++;
          p = p->suivant;
       }

    return nbClient;

    }

//=====================================================//
//=                        Question 8                 =//
//=====================================================//

void swap(Cellule *x, Cellule *y) 
{ 
    Etudiant temp = x->etudiant; 
    x->etudiant = y->etudiant; 
    y->etudiant = temp; 
}


void triListe(Cellule * L) {
    boolean notDone = true;
    Cellule * p; 

    while (notDone)
    {
         p = L;
         notDone = false;
         while (p->suivant != NULL)
                     {
                        if(p->etudiant.numero > p->suivant->etudiant.numero) {
                            swap(p, p->suivant);
                            notDone = true;
                        }
                        p = p->suivant;
                     }
    }
}


//=====================================================//
//=                        Extra                     =//
//=====================================================//

void printCellules(Cellule * L) {
    Cellule * p = L;
    while (p != NULL) {
          afficheClient(p->etudiant);
          p = p->suivant;
        }

}

void freeCellules(Cellule * L) {
    Cellule * p = L;
    Cellule *q;
    while (p != NULL) {
          q = p->suivant;
          free(p);
          p = q;
        }
}
