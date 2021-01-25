/*
URI Online Judge | 1012
    Area
-------------------------------------------------------------------------
Escreva um programa que leia tr�s valores com 
ponto flutuante de dupla precis�o: A, B e C. 
Em seguida, calcule e mostre: 
(Obs.:o que � para mostrar est� junto com sua linha respectiva no codigo)
-------------------------------------------------------------------------
Entrada:
O arquivo de entrada cont�m tr�s valores com um d�gito ap�s 
o ponto decimal.

--------------------------------------------------
Sa�da:
O arquivo de sa�da dever� conter 5 linhas de dados. 
Cada linha corresponde a uma das �reas descritas acima, 
sempre com mensagem correspondente e um espa�o entre 
os dois pontos e o valor. O valor calculado deve ser 
apresentado com 3 d�gitos ap�s o ponto decimal.

---------------------------------------------------
|Exemplos de Entrada      |	  Exemplos de Sa�da   |
---------------------------------------------------
|3.0 4.0 5.2              |    TRIANGULO: 7.800   |
                          |    CIRCULO: 84.949    |
                          |    TRAPEZIO: 18.200   |
                          |    QUADRADO: 16.000   | 
                          |    RETANGULO: 12.000  |
---------------------------------------------------
|12.7 10.4 15.2           |    TRIANGULO: 96.520  |
                          |    CIRCULO: 725.833   |
                          |    TRAPEZIO: 175.560  |
                          |    QUADRADO: 108.160  |
                          |    RETANGULO: 132.080 |
---------------------------------------------------
*/

#include <stdio.h>
int main(){
    double A,B,C;
    scanf("%lf %lf %lf", &A,&B,&C);
    //a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
	printf("TRIANGULO: %.3lf\n", ((A*C)/2));
    //b) a �rea do c�rculo de raio C. (pi = 3.14159)
    printf("CIRCULO: %.3lf\n", (3.14159*(C*C)));
    //c) a �rea do trap�zio que tem A e B por bases e C por altura.
    printf("TRAPEZIO: %.3lf\n", ((A+B)*C/2));
    //d) a �rea do quadrado que tem lado B.
    printf("QUADRADO: %.3lf\n", B*B);
    //e) a �rea do ret�ngulo que tem lados A e B.
    printf("RETANGULO: %.3lf\n", A*B);
    
    return 0;
}
