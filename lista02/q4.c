#include <stdio.h>

int main(){
    int n1, n2, n3, maior;

    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    printf("Informe o segundo número: ");
    scanf("%d", &n2);
    printf("Informe o terceiro número: ");
    scanf("%d", &n3);

    if (n1 == n2 && n2 == n3) {
        printf("Todos os números são iguais\n");
    } else {
        maior = n1;
        if (n2 > maior) {
            maior = n2;
        }
        if (n3 > maior) {
            maior = n3;
        }
        printf("O maior número é %d\n", maior);
    }

    return 0;
}