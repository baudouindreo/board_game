#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <stdio.h>
#include <ncurses.h>


struct serpant
{
    int taille;
    int tailleX[100];
    int tailleY[100];
};
struct fruit
{
    int fruitX;
    int fruitY;
};

void affiche(int plateau[10][10]);
void partie();
void rotation(struct serpant *objet, int plateau[10][10]);



#endif
