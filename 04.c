#include <stdio.h>
int main(){
    int Idade;

    printf("Informe sua idade:");
    scanf("%d", &Idade);

    if (Idade < 18){
        if (Idade > 0){
           printf("Menor de Idade");
        }
        
    } else 
        printf("Maior de idade");
        
      
}