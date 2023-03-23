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

int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", fatorial(x));
	return 0;
}
