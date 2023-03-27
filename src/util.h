enum valide {VRAI, FAUX};
typedef enum valide Valide;

struct voiture{
    int id;
    char[] Marque;
    char[] Couleur;
    int dateFabrication;
    char[] numeroMatricule;
}
typedef struct voiture Voiture

struct assurance{
    int dateDebut;
    int dateFin;
    char[] type;
}

typedef struct assurance Assurance;

struct client{
    int id;
    char[] nom;
    char[] prenom;
    int dateNaissance;
}

typedef struct client Client;

struct celluleclient{
    Client;
    int* suivant;
}

int* createTable(int taille_T);
int * concateOrder(int * T1, int taille_T1, int * T2, int taille_T2);