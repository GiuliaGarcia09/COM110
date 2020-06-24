#include <stdio.h>

int main()
{
    float s=0;
    
    printf("Insira o salário do funcionário: ");
    scanf("%f", &s);
    
    printf("\nO funcionário recebeu um aumento de 25%!");
    printf("\n\nO novo salário é: %0.2f", (s*0.25)+s);
    
    return 0;
}
