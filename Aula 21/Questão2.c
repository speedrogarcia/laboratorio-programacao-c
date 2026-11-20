
#include <stdio.h>

int main() {
    FILE *arquivo;
    int numeros[5];
    int i;

    printf("Digite 5 numeros inteiros:\n");

    for (i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    arquivo = fopen("numeros.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        fprintf(arquivo, "%d\n", numeros[i]);
    }

    fclose(arquivo);

    arquivo = fopen("numeros.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao ler o arquivo!\n");
        return 1;
    }

    printf("\nNumeros armazenados no arquivo:\n");

    while (fscanf(arquivo, "%d", &numeros[0]) == 1) {
        printf("%d\n", numeros[0]);
    }

    fclose(arquivo);

    return 0;
}
