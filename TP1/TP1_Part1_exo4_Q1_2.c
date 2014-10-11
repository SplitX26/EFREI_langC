//
//  Partie 1 Exercice 4 Question 1 et 2
//
//  Created by Alexandre on 28/09/2014.
//  Copyright (c) 2014 Alexandre. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
/*
	Rappel maths :
	L'equation d'une droite est y=ax+b
	On a deux points :
	P1 (x1,y2) et P2 (x2, y2)
	a = (y2-y1)/(x2-x1)
	y = ax+b <=> b=y-ax
*/

int main(int argc, char * argv[]){
	float x1, x2, y1, y2, a, b;
	printf("Coordonnees du premier point : \n");
	printf("x : ");
	scanf("%f", &x1);
	printf("y : ");
	scanf("%f", &y1);
	printf("Coordonnees du deuxieme point : \n");
	printf("x : ");
	scanf("%f", &x2);
	printf("y : ");
	scanf("%f", &y2);

	a = (y2-y1)/(x2-x1);
	b = y1-(a*x1);

	printf("L'équation de la droite est : y = %.2f * x + %.2f\n",a,b);



	
	return 0;
}

