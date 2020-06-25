#include <stdio.h>

int main()
{
    float n1=0, n2=0, n3=0, n4=0;
    
    printf("Insira quatro notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    float ma = (n1+n2+n3+n4)/4;
    
    printf("\nA média das notas é: %.2f", ma);
    
    if(ma>=6){
        printf("\nO aluno foi aprovado :)");
    }else{
        printf("\nO aluno foi reprovado :(");
    }
    
    return 0;
}


