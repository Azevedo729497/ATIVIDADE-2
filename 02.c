#include <stdio.h>
int main(){
    //Aumento de 30% no salario inferior a 500 reais.
    //Declaração de variaveis
    float sal, sal_reaj = 0;

    printf("Informe o salario:");
    scanf("%f", &sal);
    //Condições de recebimento do aumento
    if (sal < 500){
        sal_reaj = 1.3*sal;
        printf("salario reajustado = %.2f", sal_reaj);
    } else
        printf("O funcionario nao tem diretio ao aumento");

    return 0;
   
    
}
