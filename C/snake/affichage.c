#include "fonction.h"

void affiche(int plateau[10][10]){
    for(int i=0; i<10 ;i++){
        for(int j=0; j<10 ;j++){
            printf("|");
            if(plateau[i][j]==1){
                printf("o");
            }
            else{
                printf(" ");
            }

        }
        printf("|");
        printf("\n");
    }
}