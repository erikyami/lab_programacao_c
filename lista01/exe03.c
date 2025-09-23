#include <stdio.h>

int main() {
    float a, b, raiz;
    printf("Este programa calcula a raiz de uma função afim (y = ax + b)\n");
    
    printf("Informe o valor a: ");
    scanf("%f", &a);
    
    printf("Informe o valor de b: ");
    scanf("%f", &b);
    
    
    // Cálculo da raiz
    raiz = (b/a) * (-1);
    printf("A raiz da função é: %.2f\n", raiz);

    return 0;
}