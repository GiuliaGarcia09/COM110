#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	printf("Insira um número inteiro positivo: ");
	scanf("%d", &a);
    
	for (int i = 0; i <= 10; i++) {
    	printf("\n%d^%d = %0.2lf", a, i, pow(a, i));
	}
    
	return 0;
}

