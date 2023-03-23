#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fatorial(int x)
{
    if (x<2)
    {
        return 1;
    }
    else
    {
        return (x* fatorial(x-1));
    }
}

 void cprint()
 {
     int x;
     scanf("%d", &x);
     
     if(x==-1)
     {
         return;
     }
     else
     {
         printf("%d\n", fatorial(x));
         cprint();
     }
 }
int main() {
    cprint();
	return 0;
}
