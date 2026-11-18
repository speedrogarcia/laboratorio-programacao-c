#include <stdio.h>

float maiorPreco(float preco1, float preco2) {
    if (preco1 > preco2) {
        return preco1;
    } else {
        return preco2;
    }
}

int main() {
    float preco1, preco2, maior;

    printf("==== COMPARADOR DE PRECOS ====\n\n");

    printf("Preco 1: ");
    scanf("%f", &preco1);

    printf("Preco 2: ");
    scanf("%f", &preco2);

    if (preco1 == preco2) {
        printf("\nOs precos sao iguais!\n");
    } else {
        maior = maiorPreco(preco1, preco2);
        printf("\nMaior preco: R$ %.2f\n", maior);
    }

    return 0;
}