#include <stdio.h>

int main(){
    float salario, aumento;
    printf("Informe o salário atual: ");
    scanf("%f", &salario);

    if (salario < 1750){
        aumento = 0.12;
    } else if (salario < 2000){
        aumento = 0.10;
    } else if (salario < 3000){
        aumento = 0.07;
    } else {
        aumento = 0.05;
    }

    printf("Seu novo salário é %.2f\n", salario*(1+aumento));
    
    return 0;
}