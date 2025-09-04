#include <stdio.h>
int main(){
    int n1, n2;
    float op;
    char p;

    printf("Informe os inteiros a serem operados\n");
    scanf("%i %i", &n1, &n2);

    printf("\nSeleione a operacao>\n(*) - Multipricar;\n(/) - Dividir;\n(+) - Somar;\n(-) - Subtrair\n");
    scanf("%c ", &p);

    switch (p)
    {
    case '*':
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