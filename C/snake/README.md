12/10/2023
# Jeu du Serpent en C

Ce projet est une implémentation simple du jeu du Serpent (Snake) en langage C, basé sur la bibliothèque ncurses. Il est divisé en plusieurs fichiers source C pour une meilleure organisation.

## Structure du Projet

- `main.c`: Le fichier principal contenant la fonction `main()`. Il initialise le jeu en appelant `partie()`.

- `initialisation.c`: Ce fichier contient la logique d'initialisation du jeu. Il crée le plateau de jeu, le serpent "Anaconda", et configure le jeu de départ.

- `plateau.c`: Le fichier qui gère la rotation de l'objet, mais actuellement il appelle la fonction d'affichage.

- `affichage.c`: Ce fichier est responsable de l'affichage du plateau de jeu à l'écran en utilisant la bibliothèque ncurses.

- `fonction.h`: L'en-tête contenant les structures et les prototypes de fonctions utilisés dans le projet.

## Fonctionnement

Le jeu est implémenté en utilisant la bibliothèque ncurses, permettant une interface utilisateur interactive en mode texte. Le serpent est représenté par la lettre "o" et l'objectif est de manger des fruits pour augmenter la taille du serpent tout en évitant les bords du plateau et les collisions avec le corps du serpent.

Le fichier `main.c` initialise le jeu en appelant `partie()`, qui se trouve dans le fichier `initialisation.c`. La fonction `partie()` configure le plateau, crée le serpent Anaconda et commence la rotation.

Le fichier `plateau.c` gère la rotation de l'objet, tandis que le fichier `affichage.c` est responsable de l'affichage du plateau de jeu à l'écran.

## Exigences

- Un système d'exploitation compatible avec ncurses (généralement Linux ou Unix-like).
- La bibliothèque ncurses est requise pour l'exécution du jeu.

## Comment Compiler et Exécuter

1. Assurez-vous d'avoir la bibliothèque ncurses installée sur votre système.

2. Compilez le projet en utilisant la commande `gcc` (ou un autre compilateur C) avec la bibliothèque ncurses :
   ```shell
   gcc -o serpent main.c initialisation.c plateau.c affichage.c -lncurses
