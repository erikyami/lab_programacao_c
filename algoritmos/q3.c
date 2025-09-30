//Sn = (a₁ * (qⁿ - 1)) / (q - 1)
#include <stdio.h>
#include <math.h>

int main() {
    int num, soma = 0;
    
    printf("Escreva um número: ");
    scanf("%d", &num);
    
    soma = (pow(3,num) - 1)/2 ;

    printf("A soma total é %d\n", soma);

    return 0;
}
