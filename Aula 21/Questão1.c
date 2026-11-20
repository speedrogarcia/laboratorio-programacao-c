
#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char nome[50];
    char matricula[20];
    int quantidade, i;

    arquivo = fopen("funcionarios.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Quantos funcionarios deseja cadastrar? ");
    scanf("%d", &quantidade);
    getchar();

    if (quantidade < 1 || quantidade > 5) {
        printf("Quantidade invalida!\n");
        fclose(arquivo);
        return 1;
    }

    for (i = 0; i < quantidade; i++) {
        printf("\nNome do funcionario: ");
        fgets(nome, 50, stdin);
        nome[strcspn(nome, "\n")] = '\0';

        printf("Matricula: ");
        fgets(matricula, 20, stdin);
        matricula[strcspn(matricula, "\n")] = '\0';

        fprintf(arquivo, "Nome: %s | Matricula: %s\n", nome, matricula);
    }

    fclose(arquivo);

    printf("\nDados gravados com sucesso!\n");

    return 0;
}
