#include <stdio.h>

int disparos_totais = 0, p3,p6; 

void disparar(int tentativas) {
    if (tentativas == 0) {
        disparos_totais+=((p3/2)*3);
        disparos_totais+=((p6/2)*6);
        if (disparos_totais > 50) {
            printf("Foram disparados: %d tiros\n", disparos_totais);
            printf("Meus alunos estao estragando tudo! Preciso intervir!\n");
        } else {
            printf("Foram disparados: %d tiros\n", disparos_totais);
            printf("Esta tudo sobre controle, posso passar mais tempo com Raquel...\n");
        }
        return;
    }

    int pessoas ;
    char resultado[20];
    scanf("%d %s", &pessoas, resultado);

    if (strcmp(resultado, "Conseguiu") == 0) { 
        p6+=pessoas;
        
        disparar(tentativas - 1); 
        
    } else { // caso de fuga mal sucedida
        p3+=pessoas;
        disparar(tentativas - 1); 
    }
}

int main() {
    int n;
    scanf("%d", &n);

    disparar(n);

    return 0;
}
