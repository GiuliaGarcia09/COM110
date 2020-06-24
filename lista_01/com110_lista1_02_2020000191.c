#include <stdio.h>

int main()
{
    float n1=0, n2=0, n3=0;
    float p1=0, p2=0, p3=0;
    
    printf("Insira três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    printf("\nInsira três pesos: ");
    scanf("%f %f %f", &p1, &p2, &p3);
    
    printf("\nA média ponderada dos números inseridos é: %0.2f", (n1*p1+n2*p2+n3*p3)/(p1+p2+p3));
    
    return 0;
}



