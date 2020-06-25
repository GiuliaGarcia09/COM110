#include <stdio.h>

int main()
{
    float n1=0, n2=0, n3=0, maior=0, menor=0;
    
    printf("Insira três valores: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    if(n1>n2){
        if(n2>n3){
            maior = n1;
            menor = n3;
        }
        if(n3>n2){
            maior = n1;
            menor = n2;
        }
    }
    
    if(n2>n1){
        if(n1>n3){
            maior = n2;
            menor = n3;
        }
        if(n3>n1){
            maior = n2;
            menor = n1;
        }
    }
    
    if(n3>n1){
        if(n1>n2){
            maior = n3;
            menor = n2;
        }
        if(n2>n1){
            maior = n3;
            menor = n1;
        }
    }
            
    printf("\nO maior valor é: %0.2f", maior);
    printf("\nO menor valor é: %0.2f", menor);
    
    return 0;
}



