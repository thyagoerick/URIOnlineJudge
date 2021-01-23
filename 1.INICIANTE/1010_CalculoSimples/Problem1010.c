/*
URI Online Judge | 1010
    C�lculo Simples
--------------------------------------------------
Neste problema, deve-se ler o c�digo de uma pe�a 1, 
o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1, 
o c�digo de uma pe�a 2, o n�mero de pe�as 2 e o valor 
unit�rio de cada pe�a 2. Ap�s, calcule e mostre o valor 
a ser pago.

--------------------------------------------------
Entrada:
O arquivo de entrada cont�m duas linhas de dados. 
Em cada linha haver� 3 valores, respectivamente 
dois inteiros e um valor com 2 casas decimais.

--------------------------------------------------
Sa�da:
A sa�da dever� ser uma mensagem conforme o exemplo 
fornecido abaixo, lembrando de deixar um espa�o ap�s 
os dois pontos e um espa�o ap�s o "R$". O valor dever� 
ser apresentado com 2 casas ap�s o ponto.

-------------------------------------------------
|Exemplos de Entrada |	Exemplos de Sa�da       |
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
