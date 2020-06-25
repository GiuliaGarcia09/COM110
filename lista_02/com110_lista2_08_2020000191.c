#include <stdio.h>

int main()
{
    float n1=0, n2=0, n3=0, maior=0, meio=0, menor=0;
    
    printf("Insira três valores: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    if(n1>n2){
        if(n2>n3){
            menor = n3;
            meio = n2;
            maior = n1;
        }
        if(n3>n2){
            menor = n2;
            meio = n3;
            maior = n1;
        }
    }
    
    if(n2>n1){
        if(n1>n3){
            menor = n3;
            meio = n1;
            maior = n2;
        }
        if(n3>n1){
            menor = n1;
            meio = n3;
            maior = n2;
        }
    }
    
    if(n3>n1){
        if(n1>n2){
            menor = n2;
            meio = n1;
            maior = n3;
        }
        if(n2>n1){
            menor = n1;
            meio = n2;
            maior = n3;
        }
    }
            
    printf("\nO ordem crescente dos três valores é: %0.2f, %0.2f, %0.2f", menor, meio, maior);
    return 0;
}




