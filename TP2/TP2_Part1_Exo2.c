//  TP2
//  Partie 1 Exercice 2
//
//  Created by Jerome on 06/10/2014.
//  Copyright (c) 2014 Jerome. All rights reserved.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charactere=65, number=48;
    for (charactere; charactere<91;charactere++){
        printf("%c, %d\n", charactere, charactere);
    }
    for (number; number<58;number++){
        printf("%c, %d\n", number, number);
    }
    return 0;
}
