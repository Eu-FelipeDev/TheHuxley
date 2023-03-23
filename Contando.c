#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int contaPares(int x)
{
    int nf;
    int rst;
    if(x==0)
    {
        return 0;
    }
    else
    {
        nf= x % 10;
        rst= x / 10;
        if(nf % 2 ==0)
        {
            return 1+contaPares(rst);
        }
        else
        {
            return contaPares(rst);
        }
    }
}
int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", contaPares(x));
	return 0;
}