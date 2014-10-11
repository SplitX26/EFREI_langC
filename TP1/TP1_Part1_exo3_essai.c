//
//  Partie 1 Exercice 3
//
//  Created by Alexandre on 28/09/2014.
//  Copyright (c) 2014 Alexandre. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
/*
	Enonce ambigu
*/

int main(int argc, char * argv[]){
	int nbTest=0;
	if(argc>=1){

		for (int i = 1; i < argc; ++i)
		{
			nbTest=atoi(argv[i]);
			printf("%d : \n", nbTest);
			if(nbTest%2==0){
				printf("divisible par 2\n");
			}
			else{
				printf("non divisible par 2\n");
			}

			if(nbTest%3==0){
				printf("divisible par 3\n");
			}
			else{
				printf("non divisible par 3\n");
			}
			printf("\n");
		}
	}else{
		printf("Vous devez lancez le programme avec au moins un nombre en argument.\n");
	}
	
	return 0;
}

