
#include <stdio.h>

void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("\nValor antes: %d\n", numero);

    dobrar(&numero);

    printf("Valor depois: %d\n", numero);

    return 0;
}
