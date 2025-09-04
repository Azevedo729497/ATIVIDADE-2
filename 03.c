#include <stdio.h> //entrada e saíde
#include <string.h> //biblioteca de string

int main(){
    char senha[20]; //vetor. Todo vetor reserva a ultima posição para o "/0"

    printf("Digite a senha:");
    scanf("%s", senha); //quando colocar o vetor não precisa do "&"

    if (strcmp(senha,"ASDFG") == 0){ //strcmp = função de string
        printf("AUTORIZADO");
    }else
        printf("NEGADO");
    
 return 0;
}
