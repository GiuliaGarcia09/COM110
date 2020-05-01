#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x=0, y=0, i=0, z=0, w=0, opc=0;
    float l_qua=0, b_ret=0, h_ret=0, l_teq=0;

    /*menu de opções*/ 
        while(opc!=6){
        
        /*título*/
            for(x=0; x<59; x++){
                printf("#");
            }
            printf("\n");
            
            for(x=59; x<81; x++){
                printf("#");
            }
            printf(" MENU DE OPÇÕES ");
            
            for(x=81; x<102; x++){
                printf("#");
            }
            printf("\n");
            
            for(x=119; x<178; x++){
                printf("#");
            }
        
        /*conteúdo*/
            for(i=0; i<5; i++){
                printf("\n##");
                
                for(x=0; x<55; x++){
                    if(x==2 && i==1){
                        printf("Escolha uma forma geométrica:                        ##");
                        
                    }else
                        if(x==2 && i==3){
                            printf("1. Quadrado                                          ##\n");
                            printf("##  2. Retângulo                                         ##\n");
                            printf("##  3. Triângulo equilátero                              ##\n");
                            printf("##  4. Triângulo retângulo (catetos iguais)              ##\n");
                            printf("##  5. Losango                                           ##\n");
                            printf("##  6. Sair                                              ##");
                    }else{
                        printf(" ");
                    }
                }
                    
                for(x=0; x<2 && i!=1 && i!=3; x++){
                    printf("#");
                }
            }
        
        /*linha de baixo*/
            printf("\n");
        
            for(x=0;x<118;x++){
                printf("#");
                
                if(x==58){
                    printf("\n");
                }
            }
            
        /*interação com o usuário*/
            printf("\n\nOpção: ");
            scanf("%d", &opc);
            
        /*opções*/
            if (opc>0 && opc<6){
                
                for(x=0; x<59; x++){
                    printf("=");
                }
                printf("\n");
                
                /*quadrado*/
                    if(opc == 1){
                        printf ("   QUADRADO\n");
                        
                        for(x=0; x<59; x++){
                            printf("=");
                        }
                        
                        printf("\n\n Insira os lados do quadrado: ");
                        scanf("%f", &l_qua);
                        
                        printf("\n ÁREA: %.2f", pow(l_qua, 2));
                        printf("\n PERÍMETRO: %.2f\n\n", l_qua*4);
                        
                        for(x=0; x<l_qua+2; x++){
                            printf(" -");
                        }
                        
                        for(i=0; i<l_qua; i++){
                            printf("\n | ");
                            
                            for(x=0; x<(l_qua*2)-1; x++){
                                    printf("@");
                            }
                            
                            for(z=0; z<1; z++){
                                printf(" | ");
                            }

                            for(w=0; w<l_qua+2 && i==l_qua-1; w++){
                                if(w==0){
                                    printf("\n");
                                }
                                printf(" -");
                            }
                        }
                        
                        printf("\n\nAperte x para ser redirecionado para o menu...");
                        while(getchar()!='x');
                        
                        printf("\n");
                        
                        for(x=0; x<59; x++){
                            printf("=");
                        }
                        
                        printf("\n\n");
                        
                /*retângulo*/
                    }else if(opc == 2){
                         printf ("   RETÂNGULO\n");
                        
                        for(x=0; x<59; x++){
                            printf("=");
                        }
                        
                        printf("\n\n Insira a base do retângulo: ");
                        scanf("%f", &b_ret);
                        
                        printf(" Insira a altura do retângulo: ");
                        scanf("%f", &h_ret);
                        
                        printf("\n ÁREA: %.2f", b_ret*h_ret);
                        printf("\n PERÍMETRO: %.2f\n\n", 2*(b_ret + h_ret));
                        
                        for(x=0; x<b_ret+2; x++){
                            printf(" -");
                        }
                        
                        for(i=0; i<h_ret; i++){
                            printf("\n | ");
                            
                            for(x=0; x<(b_ret*2)-1; x++){
                                    printf("@");
                            }
                            
                            for(z=0; z<1; z++){
                                printf(" | ");
                            }

                            for(w=0; w<b_ret+2 && i==h_ret-1; w++){
                                if(w==0){
                                    printf("\n");
                                }
                                printf(" -");
                            }
                        }
                        
                        printf("\n\nAperte x para ser redirecionado para o menu...");
                        while(getchar()!='x');
                        
                        printf("\n");
                    
                        for(x=0; x<59; x++){
                            printf("=");
                        }
                        
                        printf("\n\n");
                
                /*triângulo equilátero*/
                    }else if(opc == 3){
                        printf ("   TRIÂNGULO EQUILÁTERO\n");
                        
                        for(x=0; x<59; x++){
                            printf("=");
                        }  
                        
                        printf("\n\n Insira o lado do triângulo equilátero: ");
                        scanf("%f", &l_teq);
                        
                        printf("\n ÁREA: %.2f", pow(l_teq, 2)*sqrt(3)/4 );
                        printf("\n PERÍMETRO: %.2f\n\n", l_teq*3);

                        for(x=0; x<=l_teq; x++){
                            printf(" ");
                            
                            if (x==l_teq)
                                printf(".\n");
                        }
                        
                        for(i=0; i<l_teq; i++){
                            printf(" ");
                            
                            for(x=0; i==(l_teq-1) && x<l_teq; x++){
                                printf("/\n");
                                
                                for(y=l_teq-1; y>0 && y!=l_teq-1; y--){
                                    printf(" ");
                                }
                            }
                        }
                        
                        for(w=0; w<=l_teq+1; w++){
                            printf("- ");
                        }
                        
                        printf("\n\nAperte x para ser redirecionado para o menu...");
                        while(getchar()!='x');
                        
                        printf("\n");
                    
                        for(x=0; x<59; x++){
                            printf("=");
                        }
                        
                        printf("\n\n");
                    
                /*triângulo retângulo*/
                    }else if(opc == 4){
                        printf ("   TRIÂNGULO RETÂNGULO\n");
                        
                        /*aqui*/
                        
                        printf("\n\nAperte x para ser redirecionado para o menu...");
                        while(getchar()!='x');
                        
                        printf("\n");
                    
                        for(x=0; x<59; x++){
                            printf("=");
                        }
                        
                        printf("\n\n");
                    
                /*losango*/
                    }else{
                        printf ("   LOSANGO\n");
                        
                        /*aqui*/
                        
                        printf("\n\nAperte x para ser redirecionado para o menu...");
                        while(getchar()!='x');
                        
                        printf("\n");
                    
                        for(x=0; x<59; x++){
                            printf("=");
                        }
                        
                        printf("\n\n");
                }
            }   
        }
    return 0;
}
