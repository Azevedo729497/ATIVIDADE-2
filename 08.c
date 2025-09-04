#include <stdio.h>
int main(){
    //Declaração de tres notas e a verificação do conceito por meio da media aritmetica das notas
    //Declaração de variaveis
    int MP, n1, n2, n3;
    printf("Informe sua nota do laboratorio, em seguida da Av. semestral e por fim do exame final:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    //Claculo da media aritmetica
    MP = (n1*2 + n2*3 + n3*5)/10;
    //Definição do conceito de acordo com a media obtida
    switch (MP)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        printf("Conceito E");
        break;
    case 5:
        printf("Conceito D");
        break;
    case 6:
        printf("Conceito C");
        break;
    case 7:
        printf("Conceito B");
        break;
    case 8:
    case 9:
    case 10:
        printf("Conceito A");
        break;
    default:
        printf("Nota invalida");
    }
    
    

}
