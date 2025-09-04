#include <stdio.h>
int main(){
    //Calculo do salario de um funcionario de acordo com as horas trabalhadas, dependentes e a quantidade de horas extras trabalhadas
    //Declaração de variaveis
    int sal, h, dp, he;
    float ht, salm, salb, vhe, salf, x, y;

    printf("Informe o valor do salario: ");
    scanf("%d", &sal);
    printf("Informe a quantidade de dependentes: ");
    scanf("%d", &dp);
    printf("Informe a quantidade de horas trabalhadas e em seguida as horas-extras: ");
    scanf("%d %d", &h, &he);

    ht = (sal)/5;//calculo do valor da hora trabalhada
    salm = h*ht;//Calculo do salario medio
    vhe = 1.5*he*ht;//valor das horas extras
    salb = salm + dp*32 + vhe;//calculo do salario bruto
    //Definição do desconto do IRRF de acordo com o salario bruto

    if (salb < 200)
    {
        if(salb < 350)
        {
            salf = salb + 100;
            printf("Sem desconto de IRRF e com direito a uma gratificacao de 100 reais, Logo, recebera: %.2f", salf);
        }      
    }else if ((salb >= 200) && (salb <= 500))
    {
        salf = 0.9*salb;
        x = salf + 100;
        y = salf + 50;

        if (salf <= 350)
        {
            printf("Seu salario tera desconto de 10o/o e uma gratificacao de 100 reais. Logo, recebera: %.2f", x);
        }else {
            printf("Seu salario tera desconto de 10o/o e uma gratificacao de 50 reais. Logo, recebera: %.2f", y);
        }
    }else if (salb > 500)
    {
        salf = 0.8*salb;
        x = salf + 50;
        printf("Seu salario tera desconto de 20o/o e uma gratificacao de 50 reais. Logo, recebera: %.2f", x);
    }else{
        printf("Algum valor informado invalido.");
    }
        

}
