//
//  Partie 1 Exercice 2 Question 3 Solution 1
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
	printf("y = ");
	scanf("%f", &y);
	printf("%f+%f = %.2f\n", x, y, x+y);
	printf("%f-%f = %.2f\n", x, y, x-y);
	printf("%f*%f = %.2f\n", x, y, x*y);
	/* 
		Première solution : 
		Si y est égal à zéro on ne fait pas le calcul
		On indique juste qu'il est "impossible" de diviser par zéro 
	*/
	if(y!=0){
		printf("%f/%f = %.2f\n", x, y, x/y);
	}else{
		printf("Impossible de diviser par zéro.\n");
	}
	
	return 0;
}

