#include <stdio.h>

int main(){
    int idade = 19;
    int quantidade = 1;
    float altura = 1.87;
    char opção = 'C';
    char nome[10] = "Claudio"; 

    printf("O nome é: %s \n", nome);
    printf("A idade é: %d anos\n", idade);
    printf("A altura é: %.2f metros\n", altura);
    printf("A opção é: %c\n", opção);

    /*
    printf("%formato1 %formato2 %formato3", variavel1, varialvel2, variavel3) 
    
    ("\n") Para pular linha.

    %d: Número inteiro. 1,2,3,4,5,6... (int)
    %i: Equivalente a %d.  (int)
    %f: Número decimal, 0.1,0.2,0.3,0.4... (float)
    %e: Número decimal em notação científica, 1.870000e+00. (float ou double)
    %c: Apenas um caractere. (char)
    %s: Um conjunto de letras. (char(string)

   */


}