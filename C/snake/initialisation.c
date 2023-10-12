#include "fonction.h"

void partie(){
    int plateau[10][10]={0};
    int score;
    struct serpant anaconda;
    anaconda.taille = 2;
    anaconda.tailleX[0]=5;
    anaconda.tailleX[1]=5;
    anaconda.tailleY[0]=2;
    anaconda.tailleY[1]=3;
    for(int i=0; i<anaconda.taille; i++){
            plateau[anaconda.tailleX[i]][anaconda.tailleY[i]]=1;
    }
    timeout(100);
    rotation(&anaconda,plateau);
}

