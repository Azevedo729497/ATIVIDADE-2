#include <stdio.h>
int mian(){
    //Definir a procedencia do produto de acordo com o codigo de origem
    //Declaração de variaveis
    float P;
    int CO;

    printf("Insira o preco do produto e em seguida seu codigo de origem:\n");
    scanf("%f %f", &P, &CO);
    //Definição da procedencia do produto
    switch (CO)
    {
    case 1:
        printf("O produto custa %f e sua procedencia eh do Sul.\n", &P); break;
    case 2:
        printf("O produto custa %f e sua procedencia eh do Norte.\n", &P); break;
    case 3:
        printf("O produto custa %f e sua procedencia eh do Leste.\n", &P); break;
    case 4:
    case 5:
    case 6:
        printf("O produto custa %f e sua procedencia eh do Nordeste.\n", &P); break;
    case 7:
    case 8:
    case 9:
        printf("O produto custa %f e sua procedencia eh do Sudeste.\n", &P); break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
        printf("O produto custa %f e sua procedencia eh do Centro-Oeste.\n", &P); break;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
        printf("O produto custa %f e sua procedencia eh do Nordeste.\n", &P); break;
      
    default:
        printf("Codigo invalido");
    }
}
