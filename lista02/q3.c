#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,delta, x1, x2;
    printf("Informe o coeficiente 'a': ");
    scanf("%f", &a);
    printf("Informe o coeficiente 'b': ");
    scanf("%f", &b);
    printf("Informe o coeficiente 'c': ");
    scanf("%f", &c);
    
    delta = (b*b) - 4*a*c;

    if (sqrt(delta) > 0) {
        x1 = (-1* b + sqrt(delta))/(2*a);
        x2 = (-1* b - sqrt(delta))/(2*a);
        printf("A equação possui 2 raízes reais e distintas, são elas: %.2f e %.2f\n", x1, x2);
    } else if (sqrt(delta) == 0) {
        x1 = (-1* b + sqrt(delta))/(2*a);
        printf("A equação possui 2 raízes reais e iguais a %.2f\n", x1);
    } else {
        printf("A equação possui  raízes complexas, pois delta é negativo: %.2f\n", delta);
    }

    return 0;
}