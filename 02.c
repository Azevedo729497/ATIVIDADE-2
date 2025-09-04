#include <stdio.h>
int main(){
    float sal, sal_reaj = 0;

    printf("Informe o salario:");
    scanf("%f", &sal);

    if (sal < 500){
        sal_reaj = 1.3*sal;
        printf("salario reajustado = %.2f", sal_reaj);
    } else
        printf("O funcionario nao tem diretio ao aumento");

    return 0;
   
    
}