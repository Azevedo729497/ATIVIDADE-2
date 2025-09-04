#include <stdio.h>
int main(){
    int sal, h, dp, he;
    float ht, salm, salb, vhe, salf, x, y;

    printf("Informe o valor do salario: ");
    scanf("%d", &sal);
    printf("Informe a quantidade de dependentes: ");
    scanf("%d", &dp);
    printf("Informe a quantidade de horas trabalhadas e em seguida as horas-extras: ");
    scanf("%d %d", &h, &he);

    ht = (sal)/5;
    salm = h*ht;
    vhe = 1.5*he*ht;
    salb = salm + dp*32 + vhe;

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