#include <stdio.h>

int main()
{
    float s=0;
    
    printf("Insira um salário: ");
    scanf("%f", &s);
    
    if(s<=1000){
        printf("\nFuncionário recebeu um aumento!");
        printf("\nO novo salário é: %.2f", (s*15/100)+s);
    }
    
    if(s>1000 && s<2000){
        printf("\nFuncionário recebeu um aumento!");
        printf("\nO novo salário é: %.2f", (s*10/100)+s);
    }
    
    if(s>=2000){
        printf("\nFuncionário recebeu um aumento!");
        printf("\nO novo salário é: %.2f", (s*5/100)+s);
    }
    return 0;
}

