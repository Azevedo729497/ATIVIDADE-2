#include <stdio.h>
int main(){
    //Definir um inteiro para verificar se ele eh positivo, negativo ou zero
    //Declaração da variavel
    int num;

    printf("Digite um numero inteiro:\n");
    scanf("%i", &num);
    //Condições de definição
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
