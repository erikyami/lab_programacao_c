#include <stdio.h>

int main(void){
    float n1, n2, n3, media;
    printf("Digite o valor da nota1: ");
    scanf("%f", &n1);

    printf("Digite o valor da nota2: ");
    scanf("%f", &n2);    
    
    printf("Digite o valor da nota3 ");
    scanf("%f", &n3);    

    media = (n1+n2+n3)/3;

    printf("Sua média é %.2f\n", media);
    if (media >= 7)
       printf("Aprovado\n");
    else
       printf("Reprovado\n");
    
    return 0;
}