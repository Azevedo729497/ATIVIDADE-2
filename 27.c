#include <stdio.h>
int main(){
    int num;

    printf("Digite um numero inteiro:\n");
    scanf("%i", &num);

    if (num > 0)
    {
        printf("NUMERO POSITIVO");
    }
    if (num < 0)
        {
            printf("NUMERO NEGATIVO");
        }
        
    if (num == 0)
    {
        printf("ZERO");
    }

return 0;
    
    
}