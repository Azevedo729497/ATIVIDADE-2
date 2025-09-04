#include <stdio.h>
int main(){
    int n1, n2;

    printf("Insira dois numeros\n");
    scanf("%d %d", &n1, &n2);

    if (n1>n2)
        printf("O menor numer eh: %d", n2);
    else 
        printf("O menor numero eh: %d", n1);

return 0;
    
}