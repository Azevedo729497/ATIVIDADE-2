#include <stdio.h>
int main(){
    //Definindo tres medidas de uma figura geometrica e verificando se se trata de um triangulo e, em caso positivo, definindo seu tipo
    //Declarndo as variaveis
    int a1, a2, a3;
    printf("Infome os lados da figura geometrica:\n");
    scanf("%i %i %i", &a1, &a2, &a3);
    //Condições para ser um triangulo

    if ((a1 + a2 > a3) && (a1 + a3 > a2) && (a2 + a3 > a1)){
        //Definição do tipo de triangulo
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
