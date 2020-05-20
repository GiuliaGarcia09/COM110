#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void redirect();
void border();

int main()
{
    int opc=0, i=0, j=0, x=0, a=0;
    float ladoQuadrado=0, baseRetangulo=0, alturaRetangulo=0, ladoTrianguloEq=0, catetoTrianguloRet=0, ladoLosango=0, dMaior=0, dMenor=0;
    
    /*função de redirecionar para o menu*/
    void redirect(){
        printf("\nDigite x para ser redirecionado para o menu!\n");
        while(getchar()!='x');
        
        system("clear");
        
        return;
    }
    
    /*função da borda*/
    void border(){
        for(x=1; x<=60; x++){
            printf("=");
        }
        return;
    }

    /*while de sair*/
    while(opc!=6){
            
    /*menu de opções*/ 
        for(i=1; i<=10; i++){
            for(j=1; j<=60; j++){
                
                if (i==1 || i>=9){
                    printf("#");
                }else if(i==2){
                    if(j<23){
                        printf("#");
                    }else if(j==23){
                        printf(" MENU DE OPÇÕES ");
                    }else{
                        if(j<=45)
                        printf("#");
                    }
                }else if(i==3){
                    if(j<=60)
                        printf("#");
                }else if(i==4 || i==6 || i==8){
                    if(j==1 || j==58)
                        printf("##");
                    else
                        printf(" ");
                }else if(i==5 && j==4){
                    printf("## Escolha uma forma geométrica:                          ##");
                }else if(i==7 && j==4){
                    printf("##  1. Quadrado                                           ##\n");
                    printf("##  2. Retângulo                                          ##\n");
                    printf("##  3. Triângulo equilátero                               ##\n");
                    printf("##  4. Triângulo retângulo (catetos iguais)               ##\n");
                    printf("##  5. Losango                                            ##\n");
                    printf("##  6. Sair                                               ##");
                }
            }
            printf("\n");
        }
            
        /*interação com o usuário*/
            printf("\nOpção: ");
            fflush(stdin);
            scanf("%d", &opc);
            system("clear");
            
        /*opções*/
            switch(opc){
            border();
            printf("\n");
            
            /*quadrado*/
                case(1):
                    printf ("   QUADRADO\n");
                    
                    border();
                    printf("\n\n Insira o tamanho dos lados do quadrado: ");
                    scanf("%f", &ladoQuadrado);
                    
                    printf("\n ÁREA: %.2f", pow(ladoQuadrado, 2));
                    printf("\n PERÍMETRO: %.2f\n\n", ladoQuadrado*4);
                    
                    if(ladoQuadrado>20){
                        ladoQuadrado=20;
                        printf("Valor inserido muito alto. O tamanho dos lados foi redimensionado para 20.\n\n");
                    }
                    
                    for(i=1; i<=ladoQuadrado+2; i++){
                        if(i==1 || i==ladoQuadrado+2){
                            printf(" ");
                            for(x=1; x<=ladoQuadrado; x++){
                                printf(" -");
                            }
                        }
                        for(j=1; j<=ladoQuadrado+2; j++){
                            if(j==1 && i!=1 && i!=ladoQuadrado+2){
                                printf("| ");
                            }else if(j==ladoQuadrado+2 && i!=1 && i!=ladoQuadrado+2){
                                printf("|");
                            }else if(j<=ladoQuadrado+2 && i!=1 && i!=ladoQuadrado+2){
                                printf("@ ");
                            }
                        }
                        printf("\n");
                    }    
                    
                    redirect();
                break;
                    
            /*retângulo*/
                case(2):
                    printf ("   RETÂNGULO\n");
                    
                    border();
                    printf("\n\n Insira a base do retângulo: ");
                    scanf("%f", &baseRetangulo);
                    
                    printf(" Insira a altura do retângulo: ");
                    scanf("%f", &alturaRetangulo);
                    
                    printf("\n ÁREA: %.2f", baseRetangulo*alturaRetangulo);
                    printf("\n PERÍMETRO: %.2f\n\n", 2*(baseRetangulo + alturaRetangulo));
                    
                    if (baseRetangulo>20 || alturaRetangulo>10){
                        alturaRetangulo = 10;
                        baseRetangulo = 20;
                        printf(" Valores inseridos muito altos. A altura foi redimensionada para 10 e a base para 20.\n\n");
                    }
                    
                    if (baseRetangulo<2 || alturaRetangulo<2){
                        alturaRetangulo = 2;
                        baseRetangulo = 4;
                        printf(" Valores inseridos muito baixos. A altura foi redimensionada para 2 e a base para 4.\n\n");
                    }
                    
                    for(x=0; x<baseRetangulo+2; x++){
                        if(x==0){
                            printf(" ");
                        }else if(x==baseRetangulo+1){
                            printf(" ");
                        }else{
                            printf("- ");
                        }
                    }
                    
                    for(i=0; i<alturaRetangulo; i++){
                        printf("\n|");
                        
                        for(x=0; x<baseRetangulo-1; x++){
                            printf(" @");
                        }
                        
                        for(j=1; j==1; j++){
                            printf(" |");
                        }

                        for(int w=0; w<baseRetangulo+1 && i==alturaRetangulo-1; w++){
                            if(w==0){
                                printf("\n");
                            }else
                            printf(" -");
                        }
                    }
                    
                    printf("\n");
                    redirect();
                break;
            
            /*triângulo equilátero*/
                case(3):
                    printf ("   TRIÂNGULO EQUILÁTERO\n");
                    
                    border();
                    printf("\n\n Insira o tamanho do lado do triângulo equilátero: ");
                    scanf("%f", &ladoTrianguloEq);
                    
                    printf("\n ÁREA: %.2f", pow(ladoTrianguloEq, 2)*sqrt(3)/4 );
                    printf("\n PERÍMETRO: %.2f\n\n", ladoTrianguloEq*3);
                    
                    if(ladoTrianguloEq>15){
                        ladoTrianguloEq=15;
                        printf("Valor inserido muito alto. O tamanho dos lados foi redimensionado para 15.\n\n");
                    }
                    
                    if(ladoTrianguloEq<2){
                        ladoTrianguloEq=2;
                        printf("Valor inserido muito baixo. O tamanho dos lados foi redimensionado para 2.\n\n");
                    }
                    
                    for(x=1; x<=ladoTrianguloEq; x++){
                        if(x==ladoTrianguloEq){
                            printf(".\n");
                        }else{
                            printf(" ");
                        }
                    }
                    
                    for(i=1; i<=ladoTrianguloEq; i++){
                        for(j=1; j<=ladoTrianguloEq-i-1; j++){
                            printf(" ");
                        }
                        if(j<=ladoTrianguloEq-i){
                            printf("/");
                            for(x=1; x<=ladoTrianguloEq-j+i; x++){
                                if(x==ladoTrianguloEq-j+i){
                                    printf("\\");
                                }else{
                                    printf("@");
                                }
                            }
                        }
                        if(i==ladoTrianguloEq){
                            for(x=1; x<=ladoTrianguloEq; x++)
                                printf("- ");
                        }else{
                            printf("\n");
                        }
                    }
                    
                    printf("\n");
                    redirect();
                break;
                
            /*triângulo retângulo*/
                case(4):
                    printf ("   TRIÂNGULO RETÂNGULO\n");
                    
                    border();
                    printf("\n\n Insira o tamanho dos catetos iguais do triângulo retângulo: ");
                    scanf("%f", &catetoTrianguloRet);
                    
                    int hip = sqrt(2*(pow(catetoTrianguloRet,2)));

                    printf("\n ÁREA: %.2f", (catetoTrianguloRet*2)/2 );
                    printf("\n PERÍMETRO: %.2f\n\n", (catetoTrianguloRet*2)+hip);
                    
                    if (catetoTrianguloRet>15){
                        catetoTrianguloRet=15;
                        printf(" Valores inseridos muito altos. A tamanho dos catetos foi redimensionado para 15\n\n");
                    }
                    
                    for(i=1; i<=catetoTrianguloRet+1; i++){
                        if(i==1)
                            printf(".\n");
                        for(j=1; j<=i+1; j++){
                            if(j==1 && i!=catetoTrianguloRet+1){
                                printf("|");
                            }else if(j<=i && i!=catetoTrianguloRet+1){
                                printf("@");
                            }else if(i==catetoTrianguloRet+1){
                                printf("-");
                            }else{
                                printf("\\");
                            }
                        }
                            
                        printf("\n");
                    }
                    
                    redirect();
                break;
                
            /*paralelogramo*/
                case(5):
                    printf ("   LOSANGO\n");
                    
                    border();
                    printf("\n\n Insira o tamanho do lado do losango: ");
                    scanf("%f", &ladoLosango);
                    
                    printf(" Insira o diâmetro maior e o diâmetro menor do losango: ");
                    scanf("%f %f", &dMaior, &dMenor);
                    
                    printf("\n ÁREA: %.2f", (dMaior*dMenor)/2);
                    printf("\n PERÍMETRO: %.2f\n\n", ladoLosango*4);
                    
                    if (ladoLosango>10){
                        ladoLosango=10;
                        printf(" Valores inseridos muito altos. A tamanho do lado foi redimensionado para 10\n\n");
                    }

                    for(int i=1; i<=(2*ladoLosango)+3; i++){
                        if(i==ladoLosango+3){
                            printf(".");
                        }else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                    
                    for(int i=1; i<=(2*ladoLosango)+3; i++){
                        if(i==ladoLosango+2){
                            printf("/ \\");
                        }else{
                        printf(" ");
                        }
                    }
                    printf("\n");
                    
                    for(int i=0; i<ladoLosango; i++){
                        for(int h=0; h<=ladoLosango-i-1; h++){
                            printf(" ");
                        }
                        printf("/ ");
                        for(int j=0; j<=i; j++){
                            printf("@ ");
                        }
                        printf("\\");
                        printf("\n");
                    }
                    
                    for(int i=ladoLosango; i>0; i--){
                        for(int h=ladoLosango; h>=i+1; h--){
                            printf(" ");
                        }
                        printf(" \\ ");
                        for(int j=i; j>0; j--){
                            printf("@ ");

                        }
                        printf("/\n");
                    }
                    
                    for(int i=(2*ladoLosango)+1; i>=0; i--){
                        if(i==ladoLosango){
                            printf("\\ /");
                        }else{
                        printf(" ");
                        }
                    }
                    printf("\n");
                    
                    for(int i=(2*ladoLosango)+2; i>=0; i--){
                        if(i==ladoLosango){
                            printf(".");
                        }else{
                            printf(" ");
                        }
                    }
                  
                    printf("\n");
                    redirect();
            break;
        }
    }
    return 0;
}