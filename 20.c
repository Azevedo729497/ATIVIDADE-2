#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, V;
    float x1, x2;
     printf("Informe os coeficientes da equacao do segundo grau:\n");
     scanf("%d %d %d", &a, &b, &c);

     V = (b)*(b) - 4*(a)*(c);
     printf("Delta: %d\n", V);

     if (V > 0){
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