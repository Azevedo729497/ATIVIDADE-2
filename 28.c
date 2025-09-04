#include <stdio.h>
int main(){
    int a1, a2, a3;
    printf("Infome os lados da figura geometrica:\n");
    scanf("%i %i %i", &a1, &a2, &a3);

    if ((a1 + a2 > a3) && (a1 + a3 > a2) && (a2 + a3 > a1)){
        if ((a1 == a2) && ( a2 == a3))
        {
            printf("Os lados formam um triangulo equilatero\n");
        }
        if ((a1 != a2) && (a2 == a3))
        {
            printf("Os lados formam um triangulo isosceles\n");
        }
        if ((a1 == a2) && (a2 != a3))
        {
            printf("Os lados formam um triangulo isosceles\n");
        }
        if ((a1 != a2) && (a2 != a3))
        {
            printf("Os lados formam um triangulo escaleno\n");
        }
    } else{
        printf("Nao formam um triangulo");
    }
return 0;

}