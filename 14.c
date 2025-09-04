#include <stdio.h>
int main(){
    //Aumento de salario de acordo com o cargo
    //Declaração de variaveis
    int cdg;

    printf("Informe o codigo do funcionario:\n");
    scanf("%d", &cdg);
    //Definição do aumento de salarioo de acordo com o codigo correspondente ao cargo
    switch (cdg)
    {
    case 1:
        printf("Escriruario.\nPercentual de aumento: 50\n");
        break;
    case 2:
        printf("Secretario.\nPercentual de aumento: 35\n");
        break;
    case 3:
        printf("Caixa.\nPercentual de aumento: 20\n");
        break;
    case 4:
        printf("Gerente.\nPercentual de aumento: 10\n");
        break;
    case 5:
        printf("Diretor.\nNao tem aumento.\n");
        break;
    
    default:
        printf("Codigo invalido");
    }
return 0;

}
