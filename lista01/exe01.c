#include <stdio.h>

int main() {
    float base, altura, area;
    printf("Este programa calcula a área de um triângulo\n");
    
    printf("Informe o valor da base: ");
    scanf("%f", &base);
    
    printf("Informe o valor da altura: ");
    scanf("%f", &altura);
    
    // Cálculo de área
    area = (base * altura) / 2;
    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}