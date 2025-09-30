#include <stdio.h>

int main() {
    int n;
    printf("Escreva um número: ");
    scanf("%d", &n);

    if (n > 0)
      printf("Positivo\n");
    else if (n < 0)
      printf("Negativo\n");
    else 
      printf("O valor digitado é ZERO\n");
    return 0;
}