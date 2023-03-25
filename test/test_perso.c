#include "../test/test_perso.h"
#include <stdio.h>
#include "stdlib.h"

struct Etudiant;


void main(){
    struct Etudiant etudiant1 = {"Arthur", 11};
    printf("nom = %s || numéro = %d\n", etudiant1.nom, etudiant1.numéro);
}