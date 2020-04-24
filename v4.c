#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    
    int opcao; 
    int valor; 
    int bin[200]; 
    int aux=0;
    int cont = 0;
    int pot = 1; 
    int decimal = 0;  
   
    printf("Calculadora de conversao de bases numericas \n");
    printf("1: Decimal para Binario \n");
    printf("\n\nInforme a opcao: ");
    scanf("%d", &opcao);
    
    switch (opcao){
    case 1 :
        printf("\nDigite o valor em decimal: ");
        scanf("%d", &valor);
        
        if (valor == 0){
            printf("%d\n", valor);
            break;
        }
        
        if (valor == 1){
            printf("%d\n", valor);
            break;
        }


        else{    
             cont = 0; 
             while(valor >= 2){
                 if((valor % 2)==0){ 
                     bin[cont] = 0;
                 } 
                 else{
                     bin[cont] = 1; 
                 }
             valor = valor / 2; 
             ++cont;
            }
        bin[cont] = 1;
        for (aux = cont; aux>=0 && aux <= cont; aux--){
        printf("%d", bin[aux]);
        }
            printf("\n");
            break;
        }
        case 2 :
                printf("\nDigite o valor em Binario: ");
                scanf("%d", &valor);
                if (valor == 0){
                    printf("%d\n", valor);
                    break;
                }
 
                if (valor == 1){
                    printf("%d\n", valor);
                    break; 
                }
                else{
                    do{
                        decimal = decimal + (valor%10) * pot; 
                        pot = pot * 2; 
                        valor = valor / 10;
                    }
 
                    while(valor!=0);
                    printf("O valor em decimal e: "); 
                    printf("%d", decimal);                
                }
                break;
        default:
            break;
        }
    } 