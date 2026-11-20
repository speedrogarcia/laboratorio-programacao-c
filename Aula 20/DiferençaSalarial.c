
#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} DadosFuncionario;

int main() {
    DadosFuncionario funcionario1, funcionario2;
    float diferenca;

    printf("CADASTRO DO PRIMEIRO FUNCIONARIO\n");

    printf("Digite o nome: ");
    scanf(" %49[^\n]", funcionario1.nome);

    printf("Digite a idade: ");
    scanf("%d", &funcionario1.idade);

    printf("Digite o salario: ");
    scanf("%f", &funcionario1.salario);

    printf("\nCADASTRO DO SEGUNDO FUNCIONARIO\n");

    printf("Digite o nome: ");
    scanf(" %49[^\n]", funcionario2.nome);

    printf("Digite a idade: ");
    scanf("%d", &funcionario2.idade);

    printf("Digite o salario: ");
    scanf("%f", &funcionario2.salario);

    printf("\nDADOS DOS FUNCIONARIOS\n");

    printf("\nPrimeiro funcionario:\n");
    printf("Nome: %s\n", funcionario1.nome);
    printf("Idade: %d\n", funcionario1.idade);
    printf("Salario: R$ %.2f\n", funcionario1.salario);

    printf("\nSegundo funcionario:\n");
    printf("Nome: %s\n", funcionario2.nome);
    printf("Idade: %d\n", funcionario2.idade);
    printf("Salario: R$ %.2f\n", funcionario2.salario);

    if (funcionario1.salario == funcionario2.salario) {
        printf("\nOs funcionarios possuem salarios iguais.\n");
    }
    else {
        if (funcionario1.salario > funcionario2.salario) {
            diferenca = funcionario1.salario - funcionario2.salario;
            printf("\nO primeiro funcionario recebe mais.\n");
        }
        else {
            diferenca = funcionario2.salario - funcionario1.salario;
            printf("\nO segundo funcionario recebe mais.\n");
        }

        printf("Diferenca salarial: R$ %.2f\n", diferenca);
    }

    return 0;
}
