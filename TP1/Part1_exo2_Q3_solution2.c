//
//  Partie 1 Exercice 2 Question 3 Solution 2
//
//  Created by Alexandre on 28/09/2014.
//  Copyright (c) 2014 Alexandre. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]){
	float x, y;
	printf("x = ");
	scanf("%f", &x);
	/*
		2eme solution :
		On force l'utlisateur a entrer un chiffre different de zero
	*/
	do{
		printf("y = ");
		scanf("%f", &y);
		if(y==0.0){
			printf("Vous ne devez choisir un chiffre différent de zéro.\n");
		}
	}while(y==0);

	printf("%f+%f = %.2f\n", x, y, x+y);
	printf("%f-%f = %.2f\n", x, y, x-y);
	printf("%f*%f = %.2f\n", x, y, x*y);
	printf("%f/%f = %.2f\n", x, y, x/y);
	
	return 0;
}

