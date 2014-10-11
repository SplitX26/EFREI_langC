//
//  Partie 1 Exercice 2 Question 2
//
//  Created by Alexandre on 28/09/2014.
//  Copyright (c) 2014 Alexandre. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define CONSTVAR 5.0

int main(int argc, const char * argv[]){
	int var=10;
	/* CONSTVAR étant un fottant, le réusltat est un flottant */
	printf("%d+%f = %.2f\n", var, CONSTVAR, var+CONSTVAR);
	printf("%d-%f = %.2f\n", var, CONSTVAR, var-CONSTVAR);
	printf("%d*%f = %.2f\n", var, CONSTVAR, var*CONSTVAR);
	printf("%d/%f = %.2f\n", var, CONSTVAR, var/CONSTVAR);
	return 0;
}

