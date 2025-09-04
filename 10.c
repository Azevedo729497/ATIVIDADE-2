#include <stdio.h>
int main (){
    //Verificar se o assunto é par ou ímpar
    //Declaração de variaveis
    int num;
    printf("Insira um inteiro\n");
    scanf("%d", &num);
    //Condição de ser par ou impar
    if (num%2==0)
        printf("Este numero eh par!");
    else
        printf("Este numero eh impar!");
    
return 0;
    
}
