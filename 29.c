#include <stdio.h>
int main(){
    //Definindo 4 numeros e verificando quais deles são divisiveis por 2 e 3
    //Declaração de variaveis
    int n1, n2, n3, n4;
    float resul;

    printf("Informe quatro numeros inteiros:\n");
    scanf("%i %i %i %i", &n1, &n2, &n3, &n4);

    //Verificando um por um quem é divisivel por 2 e 3
    if (n1%6 == 0)//Quem é divisil por 6 tambem é por 2 e 3. Pois 2*3 = 6
    {
        printf("O numero %i eh divisivel por 2 e 3.\n", n1);
    }
    if (n2%6 == 0)
    {
        printf("O numero %i eh divisivel por 2 e 3.\n", n2);
    }
    if (n3%6 == 0)
    {
        printf("O numero %i eh divisivel por 2 e 3.\n", n3);
    }
    if (n4%6 == 0)
    {
        printf("O numero %i eh divisivel por 2 e 3.\n", n4);
    }
return 0; 
    
    
}
