#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double Somme(int n, int m);

int main(){
        printf("%lf\n",Somme(2, 4)); 
    return 0;
}

double Somme(int n, int m){
    double somme=0;
    if(n >0 && m>0){
        for(int i=1; i<n+1; i++){
            somme+=Exponentielle(i,m);
        }
        return somme;
    }else{
        return 0;
    }
    return -1;
}
