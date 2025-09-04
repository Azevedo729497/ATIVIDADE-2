#include <stdio.h>
#include <math.h>
//Resolver qualquer equação do 2º grau
//Declaração de variaveis
int main(){
    int a, b, c, V;
    float x1, x2;
     printf("Informe os coeficientes da equacao do segundo grau:\n");
     scanf("%d %d %d", &a, &b, &c);

     V = (b)*(b) - 4*(a)*(c);//calculo do delta
     printf("Delta: %d\n", V);
    //condições de calculo da(s) raiz(es) de acordo com o delta
     if (V > 0){
         //calculo das raizes
        x1 = (- b + sqrt(V))/(2*a);
        x2 = (- b - sqrt(V))/(2*a);
        printf("Essa equacao possui duas raizes.\nx1 = %.2f\nx2 = %.2f", x1, x2);
     }else if (V == 0)
     {
        x1 = x2 = (-b)/(2*a);
        printf("Essa equacao possui duas raizes iguais.\nx1 = x2 = %.2f", x1);
     }else
     {
        printf("Essa equacao nao possui raizes reais");
     }

return 0;

    }
