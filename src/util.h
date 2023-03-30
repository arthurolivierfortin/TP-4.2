enum valide {VRAI, FAUX};
typedef enum valide Valide;

struct voiture{
    int id;
    int dateFabrication;
    char Marque[80], numeroMatricule[80], Couleur[80];

};
typedef struct voiture Voiture;

struct assurance{
    int dateDebut;
    int dateFin;
    char type[80];
};

typedef struct assurance Assurance;

struct client{
    int id;
    int dateNaissance;
    char nom[80];
    char prenom[80];
};

typedef struct client Client;

struct celluleclient{
    Client;
    int* suivant;
};

typedef struct celluleclient CelluleClient;

struct cellulevoiture{
    Voiture;
    Assurance;
    int* suivante;
    int* propriétaire;
};

typedef struct cellulevoiture CelluleVoiture;

int* createTable(int taille_T);
int * concateOrder(int * T1, int taille_T1, int * T2, int taille_T2);