/******************************************************************************

Crie um programa que recebe três valores inteiros pelo teclado e imprime qual dos três é menor.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    
    if(num1 > num2 && num1 > num3){
        printf("O primeiro número (%d) é maior", num1);
    }else if(num2 > num1 && num2 > num3){
        printf("O segundo número (%d) é maior", num2);
    }else if(num3 > num1 && num3 > num2){
        printf("O terceiro número é maior (%d)", num3);
    }else if(num1 == num2 && num1 == num3){
        printf("Todos os números são iguais!");
    }
    return 0;
}


