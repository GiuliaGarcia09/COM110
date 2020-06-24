#include <stdio.h>
#include <locale.h>
#include <string.h>
#define A 10
#define G 8

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    int alunos[A], nota[A], notaAluno, alunosAprovados=0, i, j, x, y;
    char gabarito[G], resposta[G];
    
    /*gabarito*/
    printf(" Correção de prova!\n\n A seguir, insira o gabarito:\n\n");
    for(i=0; i<G; i++){
    	printf(" Questão %d, letra ", i+1);
    	scanf("%s", &gabarito[i]);
    }
    
    system("clear");
       
    /*matrícula*/ 
    printf(" Insira o número de matrícula de cada aluno e as suas respostas para cada questão:\n\n");
    for(j=0; j<A; j++){
    	printf(" Aluno %d: ", j+1);
    	scanf("%d", &alunos[j]);
    	notaAluno = 0;
    	
    	/*respostas do aluno no vetor j*/
    	for(x=0; x<G; x++){
    	    printf(" Questão %d, resposta: ", x+1);
    	    scanf("%s", &resposta[x]);
    	    
    	    if(resposta[x] == gabarito[x]){
    	        notaAluno++;
    	    }
    	}
    	nota[j] = notaAluno;
    	printf("\n");
    }
    
    system("clear");
    
    /*mostra a matrícula e a nota*/
    printf(" Resultados finais:\n\n");
    for(y=0; y<A; y++){
        printf(" Aluno %d, matrícula %d e nota final %d\n", y+1, alunos[y], nota[y]);
        if(nota[y] >5)
            alunosAprovados++;
    }
    
    printf("\n A porcentagem de aprovação é: %d0%%", alunosAprovados);
    
    return 0;
}