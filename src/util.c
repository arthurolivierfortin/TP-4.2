#include "stdlib.h"
#include "malloc.h"
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