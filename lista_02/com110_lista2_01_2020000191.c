#include <stdio.h>
#include <math.h>

int main()
{
    float co=0, ca=0;
    
    printf("Insira o valor do cateto oposto: ");
    scanf("%f", &co);
    
    printf("Insira o valor do cateto adjacente: ");
    scanf("%f", &ca);
    
    float hip = (co*co)+(ca*ca);
    
    printf("\nO valor da hipotenusa é: %0.2f", sqrt(hip));
    
    return 0;
}


