#include <stdio.h>

int main() {
    int n;
    printf("Escreva o valor de delta: ");
    scanf("%d", &n);

    if (n > 0)
      printf("Há duas raízes diferentes\n");
    else 
    {
      if (n==0)
      {
        printf("Há duas raízes iguais\n");
      }
      else 
      {
        printf("Raiz complexa\n");  
      }
    }
    
    
    return 0;
}