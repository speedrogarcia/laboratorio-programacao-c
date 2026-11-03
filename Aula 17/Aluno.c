
#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char codigo[10];
    char copia[50];
    char curso[50];
    char mensagem[100];
    int caracteres;

    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");

    printf("Nome do estudante: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Codigo do curso: CC ou SI ");
    scanf("%9s", codigo);

    caracteres = strlen(nome);

    strcpy(copia, nome);

    if (strcmp(codigo, "CC") == 0) {
        strcpy(curso, "Ciencia da Computacao");
    }
    else if (strcmp(codigo, "SI") == 0) {
        strcpy(curso, "Sistemas de Informacao");
    }
    else {
        printf("\nCodigo de curso invalido!\n");
        return 0;
    }

    strcpy(mensagem, "Ola, ");
    strcat(mensagem, copia);
    strcat(mensagem, "!");

    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", copia);
    printf("Curso: %s\n", curso);
    printf("Caracteres no nome: %d\n", caracteres);

    printf("\n%s\n", mensagem);

    return 0;
}
