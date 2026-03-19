#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
   double x;
   
   printf("Digite um numero: ");
   scanf("%lf", &x);
   system("clear");
   printf("Seu quadrado eh:%0.2lf ", pow(x,2));
   
    return 0;
}
