#include <stdio.h>
int main (){
    int ang;

    printf("Informe o angulo:");
    scanf("%d", &ang);
    if ((ang > 360))
    {
        ang = ang%360;
    }
    if ((ang < -360))
    {
        ang = ang%-360;
    }

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