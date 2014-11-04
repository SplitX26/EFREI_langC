//
//  main.c
//  TP3_exo2
//
//  Created by Jérôme on 20/10/2014.
//  Copyright (c) 2014 Jérôme. All rights reserved.
//

#include <stdio.h>

int Position(int T[], int x);

int main(int argc, const char * argv[]) {
    int tab[5]={1,3,5,6,8};
    int position = Position(tab, 5);
    printf("%d\n", position);
    return 0;
    
}
int Position(int T[], int x){
    for (int i=0;i<5;i++){
        if (T[i]==x)
            return i;
    }
    return -1;
}
