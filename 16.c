#include <stdio.h>
int main(){
    //Definir o codigo do seguro adequado para o cliente de acordo com sua idade e o risco envolvido na ocupação
    //Declaração de variaveis
    int id;
    char x, b, m, a;

    printf("Informe o grupo de risco do cliente:\nb - Baixo\nm - Medio\na - Alto\n");
    scanf("%c", &x);
    //Definição do grupo de risco
    switch (x)
    {
    case 'b':
        //declaração da idade
        printf("Agora informe a idade:\n");
        scanf("%d", &id);
        //condição que se encaixa a idade
        if ((id >= 18) && (id <= 24))
        {
            printf("Codigo do cliente: 7");
        }else if ((id >= 25) && (id <= 40))
        {
            printf("Codigo do cliente: 4");
        }else if ((id >= 41) && (id <= 70))
        {
            printf("Codigo do cliente: 1");
        }else {
            printf("Idade fora do limite permitido");
        }
                
        break;

    case 'm':
        printf("Agora informe a idade:\n");
        scanf("%d", &id);

        if ((id >= 18) && (id <= 24))
        {
            printf("Codigo do cliente: 8");
        }else if ((id >= 25) && (id <= 40))
        {
            printf("Codigo do cliente: 5");
        }else if ((id >= 41) && (id <= 70))
        {
            printf("Codigo do cliente: 2");
        }else {
            printf("Idade fora do limite permitido");
        }
                
        break;
    
    case 'a':
        printf("Agora informe a idade:\n");
        scanf("%d", &id);

        if ((id >= 18) && (id <= 24))
        {
            printf("Codigo do cliente: 9");
        }else if ((id >= 25) && (id <= 40))
        {
            printf("Codigo do cliente: 6");
        }else if ((id >= 41) && (id <= 70))
        {
            printf("Codigo do cliente: 3");
        }else {
            printf("Idade fora do limite permitido");
        }
                
        break;
    
    default:
        printf("Valor invalido");
    }

return 0;
}
