#include <stdio.h>
int main(){
    int he, hf;
    float H, HE, HF;

    printf("Informe a qtd de horas-extras(em minutos):\n");
    scanf("%d", &he);
    printf("Informe a qtd de horas-faltas(em minutos):\n");
    scanf("%d", &hf);

    HE = he/60;
    HF = hf/60;
    H = he - (2*(hf))/3;

    if (H > 2400){
        printf("O funcionario possui:\nHora-extra: %.2f\nHora-falta: %.2f\nHoras(em minutos): %.2f\nValor do premio (Dolar): 500", HE, HF, H);
    }else if ((H > 1800) && (H <= 2400))
    {
        printf("O funcionario possui:\nHora-extra: %.2f\nHora-falta: %.2f\nHoras(em minutos): %.2f\nValor do premio (Dolar): 400", HE, HF, H);
    }else if ((H > 1200) && (H <= 1800))
    {
        printf("O funcionario possui:\nHora-extra: %.2f\nHora-falta: %.2f\nHoras(em minutos): %.2f\nValor do premio (Dolar): 300", HE, HF, H);
    }else if ((H > 600) && (H <= 1200))
    {
        printf("O funcionario possui:\nHora-extra: %.2f\nHora-falta: %.2f\nHoras(em minutos): %.2f\nValor do premio (Dolar): 200", HE, HF, H);
    }else if ((H <= 600))
    {
        printf("O funcionario possui:\nHora-extra: %.2f\nHora-falta: %.2f\nHoras(em minutos): %.2f\nValor do premio (Dolar): 100", HE, HF, H);
    }else {
        printf("Valor invalido");
    }
    
return 0;    
    
}