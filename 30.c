#include <stdio.h>
int main(){
    int M, A, B;
    printf("Selecione uma opcao:\n1 - Mamiferos;\n2 - Aves;\n3 - Repteis.\n");
    scanf("%i", &M);

    switch (M)
    {
    case 1:
        printf("Seleione novamente:\n1 - Quadrupedes;\n2 - Bipedes;\n3 - Voadores;\n4 - Aquaticos.\n");
        scanf("%i", &A);

            if (A == 1)
            {
                printf("Selecione novamente:\n1 - Carnivoro;\n2 - Herbivoro.\n");
                scanf("%i", &B);
                switch (B)
                {
                case 1:
                    printf("Leao.");
                    break;
                
                case 2:
                    printf("Cavalo.");
                    break;
               
                }
            }
            if (A == 2)
            {
                printf("Selecione novamente:\n1 - Onivoro;\n2 - Frutiferos.\n");
                scanf("%i", &B);
                switch (B)
                {
                case 1:
                    printf("Homem.");
                    break;
                
                case 2:
                    printf("Macaco.");
                    break;
                
                }
            }
            if (A == 3)
            {
                printf("Morcego");
            }
            if (A == 4)
            {
                printf("Baleia");
            }

        break;  
    case 2:
        printf("Seleione novamente:\n1 - Nao voadores;\n2 - Nadadores;\n3 - De rapina.\n");
        scanf("%i", &A);

            if (A == 1)
            {
                printf("Selecione novamente:\n1 - Tropical;\n2 - Polar.\n");
                scanf("%i", &B);
                switch (B)
                {
                case 1:
                    printf("Avestruz.");
                    break;
                
                case 2:
                    printf("Pingum.");
                    break;
               
                }
            }
            if (A == 2)
            {
                printf("Pato.\n");
            }
            if (A == 3)
            {
                printf("Aguia");
            }

        break;  
    case 3:
        printf("Seleione novamente:\n1 - Com casco;\n2 - Carnivoro;\n3 - Sem patas.\n");
        scanf("%i", &A);

            if (A == 1)
            {
                printf("Tartaruga\n");
            }
            if (A == 2)
            {
                printf("Crocodilo.\n");
            }
            if (A == 3)
            {
                printf("Cobra.");
            }

        break;  
    
    default:;
    }
return 0;

}








/*case 2 :
        int A, B;
        printf("Seleione novamente:\n1 - Nao voadoras;\n2 - Nadadoras;\n3 - eDe rapina.\n");
        scanf("%i", &A);
        
        if (A == 1)
        {
            printf("Selecione novamente:\n1 - Tropical;\n2 - Polar.\n");
            scanf("%i", &B);

            switch (B)
            {
            case 1:
                printf("Avestruz");
                break;
            case 2:
                printf("Pingum");
                break;
            
            default:
                printf("Valor invalido");
            return 0;
            }
        }
        if (A == 2)
        {
            printf("Pato");
        }
        if (A == 3)
        {
            printf("Aguia");
        }
        */