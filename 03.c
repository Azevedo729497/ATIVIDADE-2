#include <stdio.h> //entrada e saíde
#include <string.h> //biblioteca de string
//Verificação da senha fornecida pelo usuario
int main(){
    char senha[20]; //vetor. Todo vetor reserva a ultima posição para o "/0"

    printf("Digite a senha:");
    scanf("%s", senha);
    
//condição de aceite da senha
    if (strcmp(senha,"ASDFG") == 0){ //strcmp = função de string
        printf("AUTORIZADO");
    }else
        printf("NEGADO");
    
 return 0;
}
