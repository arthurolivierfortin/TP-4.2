

// Exercice 1 Q1
struct etudiant {
    int numero;
    char nom [80], prenom [80] ;
};

typedef struct etudiant Etudiant;

// Exercice 2 Q1
struct cellule {
        Etudiant etudiant;
    	struct cellule *suivant;
};

typedef struct cellule Cellule;

typedef enum {false, true} boolean;

// Functions 
Etudiant initialiseClient(int , char[], char[]);
void afficheClient(Etudiant);
Cellule * initialiseCellule();
boolean estVide(Cellule *);
Cellule * creerCell(Etudiant);
void ajouterAuDebut(Cellule *);
void ajouterEnFin(Cellule *);
int nbEtudiants(Cellule *);
void triListe(Cellule *);

