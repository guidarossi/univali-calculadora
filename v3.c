#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int opcao; //utilizado para definicao de operacao
    int valor; //recebe o valor digitado pelo usuario
    int bin[200]; //vetor para a operacao de conversao de decimal para binario
    int aux=0; //auxiliar para laco de repeticao
    int cont = 0; //contador de casas
    int exp = 0; //utilizado para conversao de binario para decimal
    int soma = 0; //utilizado para somar

   
    printf("Calculadora de conversao de bases numericas \n");
    printf("1: Decimal para Binario \n");
    printf("2: Binario para Decimal \n");
    printf("\n\nInforme a opcao: ");
    scanf("%d", &opcao);

     
    
    switch (opcao){
    case 1 :
        printf("\nDigite o valor em decimal: ");
        scanf("%d", &valor);
        
        //se digitar 1 imprime ele mesmo
        if (valor == 1){
            printf("%d\n", valor);
        }
        
           /*se for maior que 1 realiza divisões por 2
           imprimindo o seu resto para contrução na 
           forma binaria*/
           else{    
		        cont = 0; //adicao de contador para saber quantas casas ele tera
	            while(valor >= 2){
		            if((valor % 2)==0){ //se o resto da divisao por dois for igual a zero o binario sera zero
		                bin[cont] = 0;
                    } 
                    else{
		                bin[cont] = 1; //se nao ele sera 1
		            }
		        valor = valor / 2; //divide o valor por dois para repetir o processo ate q o numero restante seja 1
		        ++cont; //adiciona mais um numero no contador de casas
	            }
		    bin[cont] = 1;//definindo o indice do bin em um
            for (aux = cont; aux>=0 && aux <= cont; aux--){//laco de repeticao para imprimir o resultado
		    printf("%d", bin[aux]);	 //o aux ira receber o valor do contador e cada vez que for executado era subtrair um
	        }
                printf("\n");
            }
            break;
       
       case 2 :
            
       default:
           break;
       }
    return 0;
}