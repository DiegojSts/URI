#include <stdio.h>

/*
Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s 
(em dinheiro). Sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas efetuadas, 
informar o total a receber no final do m�s, com duas casas decimais.

Entrada
O arquivo de entrada cont�m um texto (primeiro nome do vendedor) e 2 valores de dupla precis�o (double) com duas 
casas decimais, representando o sal�rio fixo do vendedor e montante total das vendas efetuadas por este vendedor, 
respectivamente.

Sa�da
Imprima o total que o funcion�rio dever� receber, conforme exemplo fornecido.
*/
 
int main() {
 char n[20];
 double salario, totalVendaMes, res;
 
 scanf("%s", &n);
 scanf("%lf", &salario);
 scanf("%lf", &totalVendaMes);
 
 res = (totalVendaMes * 15 )/ 100;
 
 printf("TOTAL = R$ %.2f\n", res+salario);
 
    return 0;
}
