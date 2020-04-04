#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
   int opcao;
   int valor;
   int bin[8];
   int aux;

    printf("Calculadora de conversao de bases numericas \n");
    printf("1: Decimal para Binario \n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1 :
            printf("\nDigite o valor em decimal: ");
            scanf("%d", &valor);
            if (valor == 1){
              printf("%d\n", valor);}
          
            else{    
                printf("%d em Binario: ", valor);
                for (aux = 7; aux >= 0; aux--){
                    if (valor % 2 == 0)
                    bin[aux] = 0;
                    else
                    bin[aux] = 1;
                valor = valor / 2;
                }
                for (aux = 0; aux < 8; aux++)
                    printf("%d", bin[aux]);
                    printf("\n");
            }
        break;
        default:
        break;
    }
return 0;
}
