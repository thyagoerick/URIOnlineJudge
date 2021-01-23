/*
URI Online Judge | 1009
    Salário com Bônus
--------------------------------------------------
Escreva um programa que leia o número de um funcionário, 
seu número de horas trabalhadas, o valor que recebe por 
hora e calcula o salário desse funcionário. A seguir, 
mostre o número e o salário do funcionário, com duas 
casas decimais. 
Faça um programa que leia o nome de um vendedor, o seu 
salário fixo e o total de vendas efetuadas por ele no mês 
(em dinheiro). Sabendo que este vendedor ganha 15% de comissão 
sobre suas vendas efetuadas, informar o total a receber no final 
do mês, com duas casas decimais.

--------------------------------------------------
Entrada:
O arquivo de entrada contém um texto (primeiro nome do vendedor) 
e 2 valores de dupla precisão (double) com duas casas decimais, 
representando o salário fixo do vendedor e montante total das vendas 
efetuadas por este vendedor, respectivamente.

--------------------------------------------------
Saída:
Imprima o número e o salário do funcionário, conforme 
exemplo fornecido.

---------------------------------------------
|Exemplos de Entrada |	Exemplos de Saída   |
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
