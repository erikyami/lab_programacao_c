#include <stdio.h>

int main(void){
    float n1, n2, n3, media;
    printf("Digite o valor da base: ");
    scanf("%f", &n1);

    printf("Digite o valor da altura: ");
    scanf("%f", &n2);    
    


    printf("Digite o valor da altura: ");
    scanf("%f", &n3);    

    media = (n1+n2+n3)/3;

    printf("Valor da area e %.2f unidades de area\n", media);
    return 0;
}