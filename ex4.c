/*
4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:
SP – R$67.836,43
RJ – R$36.678,66
MG – R$29.229,88
ES – R$27.165,48
Outros – R$19.849,53
Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.
*/
#include<stdio.h>
int main()
{
    float estados [6]={67836.43,36678.66,29229.88,27165.48,19849.53,'\0'};
    float total=0;
    float porcentagem;
    //somar o total
    for (int i=0;i<6;i++){
        total = total + estados[i];
    }
        //porcentagem de cada estado
        printf("SP: %.2f%%\n",(estados[0]/total)*100);
        printf("RJ: %.2f%%\n",(estados[1]/total)*100);
        printf("MG: %.2f%%\n",(estados[2]/total)*100);
        printf("ES: %.2f%%\n",(estados[3]/total)*100);
        printf("outros: %.2f%%\n",(estados[4]/total)*100);

    return 0;
}
