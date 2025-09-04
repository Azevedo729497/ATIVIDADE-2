#include <stdio.h>
int main(){
    //Ler 4 notas, calcular e imprimir a media aritmetica
    //Declaraçao de variaveis
    float n1, n2, n3, n4, media = 0;
    printf("Informe as 4 notas\n");
    printf("Primeira nota:\n");
    scanf("%f", &n1);
    printf("Segunda nota:\n");
    scanf("%f", &n2);
    printf("Tercira nota:\n");
    scanf("%f", &n3);
    printf("Quarta nota:\n");
    scanf("%f", &n4);
    //calculo da media
    media = (n1 + n2 + n3 + n4)/4;
    //condição de aprovado ou reprovado
    if (media >= 7)
        printf("Aprovado");
    else
        printf("Reprovado");

    return 0;    

}
