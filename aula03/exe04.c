#include <stdio.h>

int main() {
    int n1, n2;
    printf("Escreva um número: ");
    scanf("%d", &n1);

    printf("Escreva outro número: ");
    scanf("%d", &n2);

    if (n1 > n2)
      printf("N1[%d] é maior que N2[%d]\n",n1,n2);
    else if (n2 > n1) 
      printf("N2[%d] é maior que N1[%d]\n",n2,n1);
    else
      printf("Os números são iguais\n");
    return 0;
}