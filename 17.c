#include <stdio.h>
int main (){
    //Localização de um angulo em graus no seu quadrante
    //Declaração de variaveis
    int ang;

    printf("Informe o angulo:");
    scanf("%d", &ang);
    //Normalização de angulos maiores q 360 graus e menores que -360
    if ((ang > 360))
    {
        ang = ang%360;
    }
    if ((ang < -360))
    {
        ang = ang%-360;
    }
    //Definição do intervalo onde se localiza o angulo e definir seu quadrante correspondente
    if ((ang >= 0) && (ang < 90))
    {
        printf("Primeiro quadrante");
    }else if ((ang >= 90) && (ang < 180))
    {
        printf("Segundo quadrando");
    }else if ((ang >= 180) && (ang < 270))
    {
        printf("Terceiro quadrante");
    }else if ((ang >= 270) && (ang < 360))
    {
        printf("Quarto quadrante");
    }else if ((ang < 0) && (ang > -90))
    {
        printf("Primeiro quadrante");
    }else if ((ang <= -90) && (ang > -180))
    {
        printf("Segundo quadrando");
    }else if ((ang <= -180) && (ang > -270))
    {
        printf("Terceiro quadrante");
    }else if ((ang <= -270) && (ang > -360))
    {
        printf("Quarto quadrante");
    }   
    
    
}
