#include <stdio.h>

int main(){
    int v[4], i = 0;
    float media = 0, soma = 0;

    for (int i = 0; i < 4; i++){
        printf("Informe o %dº número: ", i+1);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 4; i++){
        printf("%d\n", v[i]);      
    }

    while (i < 4) {
        soma += v[i];
        i++;
    }

    media = soma / 4;    
    printf("A soma é %.2f, a média é %.2f\n", soma, media);

    return 0;
}