#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// coment�rios para caso eu esque�a :D
// primeiro criamos a fun�ao recursiva que far� o calculo mdc
int mdc(int a, int b) {

// verifica seo valor de b � 0 se sim retorna o valor de a, 

  if (b == 0) {
    return a;
  }
  else {
// se n�o ele retorna a mais o resto de a/b recursivamente at� o valor de b ser 0.
    return mdc(b, a % b);
  }
}
//criando uma fun��o void recursiva que receber o valor n informando a quantidade de linhas
// contendo valores A e B.
  void cprint (int n) {
  int a, b;
  //infomando a condi�ao para encerrar a fun�ao.
  if(n==0)
  {
      return;
  }
  else
  {
        scanf("%d %d", &a, &b);
        
        printf("MDC(%d,%d) = %d\n", a, b, mdc(a,b)); //printa o resultado da funcao recursiva mdc
        cprint(n-1); // chama novamente a funcao subtraindo 1 do contador n.
  }
}
int main() {
    int n;
    scanf("%d", &n);
    cprint(n); // inicializa a funcao recursiva
	return 0;
}
