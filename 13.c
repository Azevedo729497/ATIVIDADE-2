#include <stdio.h>
int main(){
    //Claassificação por idade
    //Declaração de variaveis
    int id;

    printf("Informe a idade para definir a faixa etaria\n");
    scanf("%d", &id);
    //Verificação por intervalo de idade
    if ((id >= 0) && (id <= 2))
    {
        printf("Recem-nascido");
    }else if ((id >= 3) && (id <= 11))
    {
        printf("Crianca");
    }else if ((id >= 12) && (id <= 19))
    {
        printf("Adolescente");
    }else if ((id >= 20) && (id <= 55))
    {
        printf("Adulto");
    }else if (id > 55)
    {
        printf("idoso");
    }else {
        printf("valor inválido");
    }

return 0;
    
}
