#include <stdio.h>

int main(){
    int resp;
    printf("Digite o dia da semana: ");
    scanf("%d", &resp);

    switch (resp)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terça\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
        break;
    case 7:
        printf("Sábado\n");
        break;                        
    default:
        printf("Entrada Inválida\n");
        break;
    }

    return 0;
}