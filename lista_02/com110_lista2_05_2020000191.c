#include <stdio.h>

int main()
{
    int id=0;
    
    printf("Insira uma idade: ");
    scanf("%d", &id);
    
    if(id<16){
        printf("\nNão-eleitor");
    }
    
    if(id>18 && id<65){
        printf("\nEleitor obrigatório");
    }
    
    if(id>=16 && id<=18 || id>=65){
        printf("\nEleitor facultativo");
    }
    return 0;
}



