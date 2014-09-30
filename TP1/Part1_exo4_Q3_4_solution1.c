//
//  Partie 1 Exercice 4 Question 3
//
//  Created by Alexandre on 28/09/2014.
//  Copyright (c) 2014 Alexandre. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
/*
	Th : Les coordonnées du point d’intersection de deux droites sécantes sont les
	solutions du système formé des deux équations de droites
	En clair : l'équation de la premiere droite est egale a celle de la deuxieme droite au point d'intersection
	a1*x + b1 = a2*x+b2 
	(b2-b1)/(a1-a2)

*/

int main(int argc, char * argv[]){
	float x1, x2, y1, y2, a1, b1, a2, b2, X, Y;
	printf("Premiere droite : \n");
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

	a1 = (y2-y1)/(x2-x1);
	b1 = y1-(a1*x1);

	printf("L'équation de la premiere droite est : y = %.2f * x + %.2f\n",a1,b1);
	
	printf("Deuxieme droite : \n");
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

	a2 = (y2-y1)/(x2-x1);
	b2 = y1-(a2*x1);

	printf("L'équation de la deuxieme droite est : y = %.2f * x + %.2f\n",a2,b2);

	X=(b2-b1)/(a1-a2);
	Y= (a1*X) + b1;

	printf("Les coordonnées du point d'intersection est : (%.2f,%.2f)\n",X,Y);
	
	return 0;
}

