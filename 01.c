#include <stdio.h>
int main(){
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

    media = (n1 + n2 + n3 + n4)/4;

    if (media >= 7)
        printf("Aprovado");
    else
        printf("Reprovado");

    return 0;    

}