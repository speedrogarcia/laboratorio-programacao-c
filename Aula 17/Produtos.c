
#include <stdio.h>
#include <string.h>

int main() {
    char produto[50];
    char categoria[20];
    char copia[50];
    char descricao[100];
    char categoriaDescricao[30];
    int caracteres;

    printf("===== CADASTRO DE PRODUTOS =====\n\n");

    printf("Nome do produto: ");
    fgets(produto, sizeof(produto), stdin);
    produto[strcspn(produto, "\n")] = '\0';

    printf("Categoria: HARDWARE ou PERIFERICO ");
    scanf("%19s", categoria);

    caracteres = strlen(produto);

    strcpy(copia, produto);

    if (strcmp(categoria, "HARDWARE") == 0) {
        strcpy(categoriaDescricao, "Hardware");
    }
    else if (strcmp(categoria, "PERIFERICO") == 0) {
        strcpy(categoriaDescricao, "Periférico");
    }
    else {
        printf("\nCategoria invalida!\n");
        return 0;
    }

    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", copia);
    printf("Caracteres: %d\n", caracteres);
    printf("Categoria: %s\n", categoriaDescricao);

    printf("\nDescricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}
