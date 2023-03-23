#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primo(int n)
{
     if (n % 2 ==0 && n!=2)
    {
        return 0;
    }
    else if(n % 3== 0 && n!=3)
    {
        return 0;
    }
    else if(n % 5== 0 && n!=5)
    {
        return 0;
    }
    else if(n % 7== 0 && n!=7)
    {
        return 0;
    }
    else if( n==1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void cprint()
{
    int n;
    scanf("%d", &n);
    if(n==-1)
    {
        return;
    }
    else
    {
    printf("%d\n", primo(n));
    cprint();
    }
}

int main() {
    cprint();
	return 0;
}