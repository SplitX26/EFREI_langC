//  TP2
//  Partie 1 Exercice 1
//
//  Created by Jerome on 28/09/2014.
//  Copyright (c) 2014 Jerome. All rights reserved.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Tapez un caractere: ");
    scanf("%c", &c);
    if (('a'<=c) && (c<='z')){
        printf("c'est une lettre minuscule\n");
    }else if (('A'<=c) && (c<='Z')){
        printf("c'est une lettre majuscule\n");
    }else if (('0'<=c) && (c<='9')){
        printf("c'est un chiffre\n");
    }else{
        printf("C'est un caractere non alphanumerique\n");
    }
    return 0;
}
