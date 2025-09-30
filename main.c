#include<stdio.h>
#include<string.h>

int main()
{
    char menu;

    printf("Git test\n");

    while(1)
    {

        printf("[r]Recuperar sequencia[s]Sair\n");
        scanf(" %c", menu);

        if(menu == 'r' || menu == 'R'){
            rescueSequence();

        }
        else if(menu == 's'){
            printf("Sair\n");
            break;

        } else {
            printf("Opcao invalida\n");
        }
    }
}