#include <stdio.h>

int main() {
    int n;
    printf("Escreva um número diferente de 0 (zero): ");
    scanf("%d", &n);

    if (n > 0)
      printf("Positivo\n");
    else
      printf("Negativo\n");

    return 0;
}