#include <stdio.h>
#include <stdlib.h>

int main(){
   int x, y, m;
   printf("Digite o primeiro numero:");
   scanf("%d", &x);
   printf("Digite o segundo numero:");
   scanf("%d", &y);
   
    system("clear");
   
    m=x*y;
    printf("A multiplicacao eh:%d", m);
    return 0;
}
