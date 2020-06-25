#include <stdio.h>

int main()
{
    float n1=0, n2=0, maior=0, menor=0;
    
    printf("Insira dois valores: ");
    scanf("%f %f", &n1, &n2);
    
    if(n1>n2){
        maior = n1;
        menor = n2;
    }else{
        maior = n2;
        menor = n1;
    }
        printf("A ordem crescente é: %.2f, %.2f.", menor, maior);
    return 0;
}



