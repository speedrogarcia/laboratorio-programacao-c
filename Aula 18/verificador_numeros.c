#include <stdio.h>

int verificarPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero, resultado;

    printf("===== VERIFICADOR DE NUMEROS =====\n\n");

    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = verificarPar(numero);

    if (resultado == 1) {
        printf("\nO numero %d é par.\n", numero);
    } else {
        printf("\nO numero %d é impar.\n", numero);
    }

    return 0;
}