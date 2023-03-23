#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // Se o n?mero de bolinhas for m?ltiplo de (m+1), ent?o Paula ganha.
    if (n % m == 0) {
        printf("Carlos\n");
    } else {
        printf("Paula\n");
    }

    return 0;
}
