#include <stdio.h>
int main(){
    int genero, PI; //Peso ideal(PI)
    float H; //Altura do individuo(H)

    printf("Selecione seu genero:\n1 - Masculino\n2 - Feminino\n");
    scanf("%d", &genero);

    switch (genero)
    {
    case 1:
        printf("informe sua altura em metros:\n");
        scanf("%f", &H);
        PI = (72.7*H) - 58;
        printf("Seu peso ideal eh: %d", PI);
        break;
    case 2:
        printf("informe sua altura em metros:\n");
        scanf("%f", &H);
        PI = (62.1*H) - 44.7;
        printf("Seu peso ideal eh: %d", PI);
        break;
    default:
        printf("Valor invalido");
        break;
    }
}