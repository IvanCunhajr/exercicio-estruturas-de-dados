#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
   double x;
   
   printf("Digite um numero: ");
   scanf("%lf", &x);
   system("clear");
   printf("Sua raiz quadrada eh:%0.2lf ", sqrt(x));
   
    return 0;
}
