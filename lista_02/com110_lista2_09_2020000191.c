#include <stdio.h>
#include <math.h>

int main()
{
    float a=0, b=0, c=0, x1=0, x2=0;
    
    printf("Insira três valores: ");
    scanf("%f %f %f", &a, &b, &c);
    
    float delta = ((b*b)-(4*a*c));
    printf("\nO delta é: %.2f", delta);
    
    if(delta==0){
        x1 = -(b)/(2*a);
        printf("\n\nO delta é zero, então as duas raízes são %.2f", x1);
    }
    
    if(delta<0){
        printf("\n\nO delta é negativo! Não tem raiz real");
    }
    
    if(delta>0){
        delta = sqrt(delta);
        x1 = (-(b)+delta)/(2*a);
        x2 = (-(b)-delta)/(2*a);
        
        printf("\n\nA primeira raiz é: %.2f", x1);
        printf("\n\nA segunda raiz é: %.2f", x2);
    }
    return 0;
}



