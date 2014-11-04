#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double Exponentielle(int n, int m);
double PGCD(int n, int m);

int main(){
    int operande1, operande2;
    char operateur;
    scanf("%c", &operateur);
    scanf("%d", &operande1);
    scanf("%d", &operande2);
    switch(operateur){
        case '+' : printf("%d\n", (operande1+operande2)); break;
        case '-' : printf("%d\n", (operande1-operande2)); break;
        case '*' : printf("%d\n", (operande1*operande2)); break;
        case '/' : printf("%d\n", (operande1/operande2)); break;
        case 'E' : printf("%lf\n",Exponentielle(operande1, operande2)); break;
        case 'P' : printf("%lf\n",PGCD(operande1, operande2)); break;
        default : printf("Operation inconnue\n"); break;
    }
    return 0;
}

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

double PGCD(int n, int m){
    double puissance;
    if(m==0){
        return n;
    }else{
        return PGCD(m, n%m);
    }
    return -1;  
}
