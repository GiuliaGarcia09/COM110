#include <stdio.h>

int main()
{
    float s=0, a=0;
    
    printf("Insira o salário do funcionário: ");
    scanf("%f", &s);
    
    printf("Insira o percentual de aumento do salário desse funcionário: ");
    scanf("%f", &a);
    
    printf("\nO funcionário recebeu um aumento de R$%0.2f!", (s*a)/100);
    printf("\n\nO novo salário é: R$%0.2f", (s*a/100)+s);
    
    return 0;
}
