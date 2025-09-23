#include <stdio.h>

int main(void){
    int base, altura;
    printf("Digite o valor da base: ");
    scanf("%d", &base);

    printf("Digite o valor da altura: ");
    scanf("%d", &altura);    
    
    printf("Valor da area e %d unidades de area\n", base * altura);
    return 0;
}