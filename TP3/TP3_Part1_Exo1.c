//
//  main.c
//  TP3_exo1
//
//  Created by Jérôme on 20/10/2014.
//  Copyright (c) 2014 Jérôme. All rights reserved.
//

#include <stdio.h>
#define TAILLE 5

void lecture(int *p){
    for (int i=0; i<TAILLE; i++, p++) {
        printf("tab[%d]", i);
        scanf("%d", p);
    }
}

void afficher(int *p){
    for (int i=0; i<TAILLE; i++, p++) {
         printf("%d\n", *p);
    }
}

int main(int argc, const char * argv[]){
    int tab[TAILLE];
    printf("Lecture :\n");
    lecture(&tab[0]);
    printf("Afficher :\n");
    afficher(&tab[0]);
    return 0;
}
