#include <stdio.h>

int dobro(int quantidade) {
    return quantidade * 2;
}

int main() {
    int quantidade, resultado;

    printf("==== CONTROLE DE ESTOQUE ====\n\n");

    printf("Quantidade inicial: ");
    scanf("%d", &quantidade);

    resultado = dobro(quantidade);

    printf("\nQuantidade inicial: %d\n", quantidade);
    printf("\nQuantidade apos duplicacao: %d\n", resultado);

    return 0;
}