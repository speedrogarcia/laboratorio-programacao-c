#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, maior;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite um valor inteiro: ");
            scanf("%d", &matriz[i][j]);

            if (i == 0 && j == 0) {
                maior = matriz[i][j];
            } else if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior valor da matriz: %d\n", maior);

    return 0;
}