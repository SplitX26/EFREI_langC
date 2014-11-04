#include <stdio.h>
#include <stdlib.h>

double Exponentielle(int n, int m){
    double puissance;
    if(m==0){
        return 1;
    }else{
        puissance=Exponentielle(n,m/2);
        if(m%2==0){
        puissance=puissance*puissance; /* pair */
      }else{
        puissance=puissance*puissance*n; /* impair */
      }
    }
    return puissance;  
}
int main()
{
    /*
        A faire : lecture du calcul exponentielle que 
        l'utilisateur souhaite faire
    */
    printf("%lf\n", Exponentielle(2, 4));
    return 0;
}
