#include <stdio.h>
int main(){
    //Verificar qual o menor entre dois numeros
    //Declaração de variaveis
    int n1, n2;

    printf("Insira dois numeros\n");
    scanf("%d %d", &n1, &n2);
    //Condição de maior ou menor
    if (n1>n2)
        printf("O menor numer eh: %d", n2);
    else 
        printf("O menor numero eh: %d", n1);

return 0;
    
}
