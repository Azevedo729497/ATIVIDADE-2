#include <stdio.h>
int main(){
    //verificação de maioridade
    //declaração de variavel
    int Idade;

    printf("Informe sua idade:");
    scanf("%d", &Idade);
    //condição de maioridade
    if (Idade < 18){
        if (Idade > 0){
           printf("Menor de Idade");
        }
        
    } else 
        printf("Maior de idade");
        
      
}
