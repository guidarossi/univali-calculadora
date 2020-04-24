#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int opcao; //utilizado para definicao de operacao
    int valor; //recebe o valor digitado pelo usuario
    int bin[200]; //vetor para a operacao de conversao de decimal para binario
    int aux= 0; //auxiliar para laco de repeticao para exibir o resultado
    int cont = 0; //contador de casas 
    int pot = 1; //faz a potencicao
    int decimal = 0; //recebe o valor convertido de binario para decimal
    
    do{
  
    printf("\nCALCULADORA DE CONVERSAO DE BASES NUMERICAS\n\n");
    printf("1: Decimal para Binario \n");
    printf("2: Binario para decimal \n");
    printf("Para encerrar digite 0\n");
    printf("\nInforme a opcao: ");
    scanf("%d", &opcao);
    
        switch (opcao){
            case 1 :
                printf("\nDigite o valor em Decimal: ");
                scanf("%d", &valor);
            
                //se digitar 0 imprime ele mesmo
                if (valor == 0){
                    printf("O valor em binario e: %d\n", valor);
                    break; // encerra o if e sai do case 1
                }

                //se digitar 1 imprime ele mesmo
                if (valor == 1){
                    printf("O valor em binario e: %d\n", valor);
                    break; 
                }

                /*se o numero for maior que 1 realiza divisões por 2 
                imprimindo o seu resto para contrução na forma binaria*/
                else{    
                    cont = 0; //adicao de contador para saber quantas casas o numero tem
                    while(valor >= 2){

                        //se o resto da divisao por dois for igual a zero o binario sera zero
                        if((valor % 2) == 0){ 
                            bin[cont] = 0;
                        } 

                        //se nao ele sera 1
                        else{
                            bin[cont] = 1; 
                        }
                        
                        //divide o valor por dois para repetir o processo ate q o numero restante seja 1
                        valor = valor / 2; 
                        ++cont; //adiciona mais um numero no contador de casas
                    }

                    bin[cont] = 1; //definindo o valor de bin[cont] em um

                    //laco de repeticao para imprimir o resultado
                    printf("O valor em binario e: ");
                    for (aux = cont; aux>=0 && aux <= cont; aux--){
                        //o aux ira receber o valor do contador e cada vez que for executado era subtrair um
                        printf("%d", bin[aux]);
                    }
                    printf("\n");
                    break; //encerra o else e sai do case 1
                }
        
            case 2 :
                pot = 1; //faz a potencicao
                decimal = 0; //recebe o valor convertido de binario para decimal
                printf("\nDigite o valor em Binario: ");
                scanf("%d", &valor);
                //se digitar 0 imprime ele mesmo
                if (valor == 0){
                    printf("O valor em decimal e: %d\n", valor);
                    break; // encerra o if e sai do case 2
                }
                //se digitar 1 imprime ele mesmo
                if (valor == 1){
                    printf("O valor em decimal e: %d\n", valor);
                    break; // encerra o if e sai do case 2
                }

                /*se for maior que 1, ira realizar a potenciacao de
                cada numero na base 2, onde a potencia sera adicionada
                em ordem crescente. Apos fazer a potenciacao dos numeros,
                soma-se o os resultados individuais e imprime a conversao*/

                else{
                    do{
                        //define o valor da variavel decimal, fazendo a soma do resultado        
                        decimal = decimal + (valor%10) * pot; 
                        pot = pot * 2; //define o valor que sera elevado a potenciacao             
                        valor = valor / 10; //define o resto da divisao de cada loop                       

                    }

                    //condicao da repeticao
                    while(valor!=0);
                    printf("O valor em decimal e: "); 
                    printf("%d", decimal);                
                }
                printf("\n");
                break;
        default:
            break;
        }
    } while (opcao != 0); //Enquanto a opcao digitada pelo usuario for diferente de 0, o Do sera executado
        printf("Calculadora encerrada");
    return 0;
}