#include <stdio.h>

int main() {
    float real, dolar, conversao;
    printf("Este programa converte um valor em real para dolar\n");
    
    printf("Informe o valor em real (R$): ");
    scanf("%f", &real);
    
    printf("Informe a cotação do dólar: ");
    scanf("%f", &dolar);
    
    // Cálculo de conversão
    conversao = real / dolar;
    printf("O valor em R$ %.2f informado corresponde a: $ %.2f\n", real, conversao);

    return 0;
}