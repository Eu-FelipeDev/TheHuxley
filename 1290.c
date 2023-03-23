#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//coment�rios para lembrar caso precise em alguma prova
//precisei adionar um contador para nao fazer de tras pra frete pelo t

int serie(int n, int t, int contador) // essa funcao chamada serie retorna o valor conrresponde a posicao t
{
    
    if(contador == t) // se o valor de t = 0 retorna caso base valor de n
        return n;
    else if(contador % 2 == 0) //verifica se a posicao � par acrescenta 3 no n diminui uma posicao
        return serie(n+= 3, t, contador+1);
    else  // se � impar adiciona o resto da divisao de n por 5 e diminui uma posica
        return serie(n+= (n % 5), t, contador+1);
}

int main()
{
    int n, t, contador=0;
    scanf("%d %d", &n, &t);
    printf("%d\n", serie(n,t,contador));

    return 0;
}
