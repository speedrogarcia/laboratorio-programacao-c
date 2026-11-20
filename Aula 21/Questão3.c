
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main() {
    FILE *arquivo;
    Funcionario funcionario;
    int quantidade, i;

    printf("Quantos funcionarios deseja cadastrar? ");
    scanf("%d", &quantidade);
    getchar();

    if (quantidade < 1 || quantidade > 5) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    arquivo = fopen("funcionarios.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (i = 0; i < quantidade; i++) {
        printf("\nNome do funcionario: ");
        fgets(funcionario.nome, 50, stdin);
        funcionario.nome[strcspn(funcionario.nome, "\n")] = '\0';

        printf("Salario: ");
        scanf("%f", &funcionario.salario);

        printf("Horas extras: ");
        scanf("%d", &funcionario.horasExtras);
        getchar();

        fprintf(arquivo, "%s;%.2f;%d\n",
                funcionario.nome,
                funcionario.salario,
                funcionario.horasExtras);
    }

    fclose(arquivo);

    printf("\nFuncionarios cadastrados com sucesso!\n");

    arquivo = fopen("funcionarios.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao ler o arquivo!\n");
        return 1;
    }

    printf("\n===== FUNCIONARIOS CADASTRADOS =====\n");

    while (fscanf(arquivo, " %49[^;];%f;%d",
                  funcionario.nome,
                  &funcionario.salario,
                  &funcionario.horasExtras) == 3) {

        printf("\nNome: %s\n", funcionario.nome);
        printf("Salario: R$ %.2f\n", funcionario.salario);
        printf("Horas extras: %d\n", funcionario.horasExtras);
    }

    fclose(arquivo);

    return 0;
}
