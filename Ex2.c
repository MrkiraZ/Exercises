 /*Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre
  será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
   escreva um programa na linguagem que desejar onde, informado um número, ele calcule
    a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.
IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;*/

#include <stdio.h>
#include <stdbool.h>
void fibo(int);
int main (){
    int num;
    printf("Insira um Numero: ");
    scanf("%d",&num);
    fibo(num);
}

void fibo(int num){
    unsigned int f1=0,f2=1,f3;
        while (f2<num){
            f3=f2+f1;
            f1=f2;
            f2=f3;
        }
         if(num==f3){
                printf("o Numero %d pertence a sequencia de fibonacci",num);
            }
            else{
                printf("o Numero %d nao pertence a sequencia de fibonacci",num);
            }
}