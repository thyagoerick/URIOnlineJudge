/*
URI Online Judge | 1008
      Salário
--------------------------------------------------
Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais. 

--------------------------------------------------
Entrada:
O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, respectivamente. 

--------------------------------------------------
Saída:
Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes e depois da igualdade. No caso do salário, também deve haver um espaço em branco após o $. 

*/

#include <stdio.h>
int main() {
    int nf, ht;
    float vl, sl;
    scanf("%d %d", &nf, &ht);
    scanf("%f", &vl);
    sl=ht*vl;
    printf("NUMBER = %d\n", nf);
    printf("SALARY = U$ %.2f\n", sl);
    return 0;
}
