#include <stdio.h>

int main()
{
    float n1=0, n2=0, n3=0;
    
    printf("Insira três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    printf("A média aritmética dos números inseridos é: %0.2f", (n1+n2+n3)/3);
    
    return 0;
}

