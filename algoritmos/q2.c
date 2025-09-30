#include <stdio.h>

int main() {
    int num, cont = 0, soma = 0;

    do {
      printf("Escreva um número: ");
      scanf("%d", &num);

      soma += num;
      cont++;

    } while (num != 0);

    printf("A soma total é %d\n", soma);
    printf("Total de números digitados %d\n", cont);

    return 0;
}