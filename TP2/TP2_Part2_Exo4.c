#include <stdio.h>
#include <stdlib.h>

double PGCD(int n, int m){
    double puissance;
    if(m==0){
        return n;
    }else{
        return PGCD(m, n%m);
    }
    return -1;  
}
int main()
{
    /*
        A faire : lecture du calcul exponentielle que 
        l'utilisateur souhaite faire
    */
    printf("%lf\n", PGCD(4, 16));
    return 0;
}
