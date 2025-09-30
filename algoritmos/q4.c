#include <stdio.h>


int main(){
    int num, menor, maior;

    printf("Escreva a quantidade de alunos");
    scanf("%d",&num);

    int notas[num];

    for (int i = 0; i < num; i++) {
        printf("Informa a %d nota: ",i+1);
        scanf("%d", &notas[i]);
    }

    maior = notas[0];
    menor = notas[0];

    for (int i = 0; i < num; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
        if (notas[i] < menor) {
            menor = notas[i];
        }    
    }    

    printf("A maior nota é: %d\n",maior);
    printf("A menor nota é: %d\n",menor);
    
    return 0;
}