#include <stdio.h>
#include <math.h>

int main()
{
    float n1=0, n2=0, n3=0;
    int i=0;
    
    printf("Insira três valores: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    printf("\n1. Média aritmética\n");
    printf("2. Média geométrica\n");
    printf("3. Média ponderada\n");
    
    printf("\nEscolha uma dentre as três opções de média a ser calculada: ");
    scanf("%d", &i);
    
    if(i==1){
        printf("\nA média aritmética é: %.2f", (n1+n2+n3)/3);
    }
    
    if(i==2){
        printf("\nA média geométrica é: %.2f", pow((n1*n2), 1/3));
    }
    
    if(i==3){
        printf("\nA média ponderada é: %.2f", ((1*n1)+(2*n2)+(3*n3))/6);
    }
    return 0;
}




