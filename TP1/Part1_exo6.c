//
//  Partie 1 Exercice 6
//
//  Created by Alexandre on 28/09/2014.
//  Copyright (c) 2014 Alexandre. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int age;
    printf("Entrez votre age : ");
    scanf("%d",&age);
    if(age=<26){
        printf("Vous pouvez beneficier du tarif jeune.\n");
    }else{
        printf("Vous ne pouvez pas beneficier du tarif jeune.\n");
    }
	return 0;
}