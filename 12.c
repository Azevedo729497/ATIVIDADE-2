#include <stdio.h>
int main(){
    //Receber tres notas e calcular a media aritmetica e verificar a situação do aluno
    //Declaração de variaveis
    int n1, n2, n3;
    float media;

    printf("Informe as tres notas do aluno\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    //Caculo de media
    media = (n1 + n2 + n3)/3;
    //Condição da situação do aluno segundo a media
    if ((media <5) && (media >= 0))
    {
        printf("Media =: %.2f\nReprovado", media);
    }else if ((media >= 5) && (media < 7))
    {
        printf("Media =: %.2f\nExame", media);
    }else if ((media >= 7) && (media <= 10))
    {
        printf("Media = %.2f\nAprovado", media);
    }else
    {
        printf("Algum valor informado invalido. Digite apenas notas de 0 a 10");
    }
return 0;
    
}
