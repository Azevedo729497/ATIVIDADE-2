#include <stdio.h>
int main(){
    //Definição do valor a ser pago por um program de acordo com a forma de pagamento
    //Declaração das variaveis
    int cog;
    float vp, preco;

    printf("Informe a condicao de pagamento:\n1 - A vista no dinheiro ou cheque\n2 - A vista no cartao de credito\n3 - Em 2 vezes\n4 - Em 3 vezes\n");
    scanf("%d", &cog);
    //Escolha da forma de pagamento e definição do valor final do produto
    switch (cog)
    {
    case 1:
        printf("Informe o valor da peca:\n");
        scanf("%.f", &preco);

        vp = 0.9*preco;
        
        printf("O valor a ser pago sera: %.2f", vp);
        break;
    case 2:
        printf("Informe o valor da peca:\n");
        scanf("%f", &preco);
        
        vp = 0.95*preco;
        printf("O valor a ser pago sera: %.2f", vp);
        break;
    case 3:
        printf("Informe o valor da peca:\n");
        scanf("%f", &preco);
        
        vp = preco/2;
        printf("Serao duas parcelas de: %.2f", vp);
        break;
    case 4:
        printf("Informe o valor da peca:\n");
        scanf("%f", &preco);
        
        vp = 1.1*preco;
        printf("O valor a ser pago sera: %.2f", vp);
        break;
    
    default:
        printf("Valor invalido");

    }
}
