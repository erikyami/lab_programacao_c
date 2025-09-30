#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media > 10 || media < 0) {
        printf("Notas Inválidas\n");
        return 1;
    }

    printf("Sua média foi %.2f\n", media);
    if (media < 5) {
        printf("Conceito D\n");
    } else if (media < 7) {
        printf("Conceito C\n");
    } else if (media < 9) {
        printf("Conceito B\n");
    } else {
        printf("Conceito A\n");
    }


    return 0;
}