#include <stdio.h>
int main(){
    //Declarar dois inteiro e definição qual a operação a ser feita com os dois.
    //Declaração de variaveis
    int n1, n2;
    float op;
    char p;

    printf("Informe os inteiros a serem operados\n");
    scanf("%i %i", &n1, &n2);

    printf("\nSeleione a operacao>\n(*) - Multipricar;\n(/) - Dividir;\n(+) - Somar;\n(-) - Subtrair\n");
    scanf("%c ", &p);
    //Escolha da operação a ser realizada

    switch (p)
    {
    case '*':
        //calculo da operação selecionada
        op = n1*n2;
        printf("O resultado da operacao selecionada eh: %.2f", op);
        break;
    case '/':
        op = n1/n2;
        printf("O resultado da operacao selecionada eh: %.2f", op);
        break;
    case '+':
        op = n1 + n2;
        printf("O resultado da operacao selecionada eh: %.2f", op);
        break;
    case '-':
        op = n1 - n2;
        printf("O resultado da operacao selecionada eh: %.2f", op);
        break;
    default:
        printf("Valor invalido");
    }
return 0;

}
