#include <stdio.h>
#include <math.h>

int main(){
    int a, x, y, z, n;
    float q;

    printf("Selecione uma opcao:\n1 - Soma\n2 - Raiz Quadrada\n3 - Finalizar\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Informe os valores inteiros para realizar a soma:\n");
        scanf("%d %d", &x, &y);
        z = x + y;
        printf("A soma sera: %d", z);
        break;
    case 2:
        printf("Informe um numero natural para obter sua raiz quadrada:\n");
        scanf("%d", &n);
        q = sqrt(n);
        printf("A raiz quadrada do valor sera: %.2f", q);
        break;
    case 3:
        printf("Programa finalizado");
        break;
    default: 
        printf("Valor invalido");
    }
return 0;
}