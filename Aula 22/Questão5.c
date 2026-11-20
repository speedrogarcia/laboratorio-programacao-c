
#include <stdio.h>

int main() {
    int numeros[5];
    int *ponteiro;
    int i;

    ponteiro = numeros;

    for (i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros armazenados:\n");

    for (i = 0; i < 5; i++) {
        printf("%d\n", *(ponteiro + i));
    }

    return 0;
}
