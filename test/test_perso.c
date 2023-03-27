#include<stdio.h>
#include<stdlib.h>
#include "../test/test_perso.h"


extern Etudiant;


void main(){

    int x=4;
    int* p=&x;
    int* l = p;
    *l=5;
    printf("x = %d, p = %d, l = %d\n", x, p,*l);
    //x = 5, p = 1596794676, l = 5
}