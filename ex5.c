/*
5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;
*/
#include <stdio.h>

int main (){
    char word[50];
    int i,j;
    printf("Informe uma palavra: ");
    scanf(" %49[^\n]",word);
    for ( i = 0; word[i] != '\0'; i++ ){
        }    
            for (j = i-1; j >= 0 ; j--)
            {
                printf("%c | ", word[j]);
            }

}