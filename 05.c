#include <stdio.h>
int main(){
    int Sal;
    float Reaj;

    printf("Informe seu salario:");
    scanf("%d", &Sal);

    if ((Sal <= 300) && (Sal > 0)){
        Reaj = 1.5*Sal;
        printf("Parabens, seu salario foi reajustado em 50o/o para: %f", Reaj);
    }else{
        Reaj = 1.3*Sal;
        printf("Parebens, seu salario foi reajustado em 30o/o para: %f", Reaj);
    }
 return 0;
}