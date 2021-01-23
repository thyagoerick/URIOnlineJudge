/*
URI Online Judge | 1010
    Cálculo Simples
--------------------------------------------------
Neste problema, deve-se ler o código de uma peça 1, 
o número de peças 1, o valor unitário de cada peça 1, 
o código de uma peça 2, o número de peças 2 e o valor 
unitário de cada peça 2. Após, calcule e mostre o valor 
a ser pago.

--------------------------------------------------
Entrada:
O arquivo de entrada contém duas linhas de dados. 
Em cada linha haverá 3 valores, respectivamente 
dois inteiros e um valor com 2 casas decimais.

--------------------------------------------------
Saída:
A saída deverá ser uma mensagem conforme o exemplo 
fornecido abaixo, lembrando de deixar um espaço após 
os dois pontos e um espaço após o "R$". O valor deverá 
ser apresentado com 2 casas após o ponto.

-------------------------------------------------
|Exemplos de Entrada |	Exemplos de Saída       |
-------------------------------------------------
12 1 5.30            |  VALOR A PAGAR: R$ 15.50 |
16 2 5.10            |                          |
------------------------------------------------
*/

#include <stdio.h>
int main() {
    int codp1, codp2, nump1, nump2;
    double vlunitp1, vlunitp2, vlpg;
    scanf("%d %d %lf", &codp1, &nump1, &vlunitp1);
    scanf("%d %d %lf", &codp2, &nump2, &vlunitp2);
    vlpg=(nump1*vlunitp1)+(nump2*vlunitp2);
    printf("VALOR A PAGAR: R$ %.2f\n", vlpg);
    return 0;
}
