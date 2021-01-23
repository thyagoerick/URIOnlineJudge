/*
URI Online Judge | 1009
    Sal�rio com B�nus
--------------------------------------------------
Escreva um programa que leia o n�mero de um funcion�rio, 
seu n�mero de horas trabalhadas, o valor que recebe por 
hora e calcula o sal�rio desse funcion�rio. A seguir, 
mostre o n�mero e o sal�rio do funcion�rio, com duas 
casas decimais. 
Fa�a um programa que leia o nome de um vendedor, o seu 
sal�rio fixo e o total de vendas efetuadas por ele no m�s 
(em dinheiro). Sabendo que este vendedor ganha 15% de comiss�o 
sobre suas vendas efetuadas, informar o total a receber no final 
do m�s, com duas casas decimais.

--------------------------------------------------
Entrada:
O arquivo de entrada cont�m um texto (primeiro nome do vendedor) 
e 2 valores de dupla precis�o (double) com duas casas decimais, 
representando o sal�rio fixo do vendedor e montante total das vendas 
efetuadas por este vendedor, respectivamente.

--------------------------------------------------
Sa�da:
Imprima o n�mero e o sal�rio do funcion�rio, conforme 
exemplo fornecido.

---------------------------------------------
|Exemplos de Entrada |	Exemplos de Sa�da   |
---------------------------------------------
|  JOAO              |  TOTAL = R$ 684.54   |
|  500.00            |                      |
|  1230.30           |                      |
 --------------------------------------------
*/

#include <stdio.h>
int main() {
    char nm;
    double slf, cmv, ttl;
    scanf("%s %lf %lf", &nm, &slf, &cmv);
    ttl=slf+cmv*0.15;
    printf("TOTAL = R$ %.2f\n", ttl);
    return 0;
}
