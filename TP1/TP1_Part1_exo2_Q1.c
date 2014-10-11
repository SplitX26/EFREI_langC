//
//  Partie 1 Exercice 2 Question 1
//
//  Created by Alexandre on 28/09/2014.
//  Copyright (c) 2014 Alexandre. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
/* On aurait tout simplement pu prendre une variable const : const int var = 5; */
#define CONSTVAR 5

int main(int argc, const char * argv[]){
	int var=10;
	/* Pas de besoin de variables supplémentaires pour faire le calcul */
	printf("%d+%d = %d\n", var, CONSTVAR, var+CONSTVAR);
	printf("%d-%d = %d\n", var, CONSTVAR, var-CONSTVAR);
	printf("%d*%d = %d\n", var, CONSTVAR, var*CONSTVAR);
	printf("%d/%d = %d\n", var, CONSTVAR, var/CONSTVAR);
	return 0;
}

