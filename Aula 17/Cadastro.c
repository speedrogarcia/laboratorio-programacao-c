
#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char perfil[20];
    char confirmacao[50];
    char mensagem[100];
    char perfilDescricao[30];
    int quantidade;

    printf("===== CADASTRO DE USUARIOS =====\n\n");

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite seu perfil: COMUM ou ADMIN ");
    scanf("%19s", perfil);

    quantidade = strlen(nome);

    strcpy(confirmacao, nome);

    if (strcmp(perfil, "ADMIN") == 0) {
        strcpy(perfilDescricao, "Administrador");
    }
    else if (strcmp(perfil, "COMUM") == 0) {
        strcpy(perfilDescricao, "Usuario Comum");
    }
    else {
        printf("\nPerfil invalido! Cadastro nao realizado.\n");
        return 0;
    }

    strcpy(mensagem, "Bem-vindo(a), ");
    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", confirmacao);
    printf("Quantidade de caracteres: %d\n", quantidade);
    printf("Perfil: %s\n", perfilDescricao);

    printf("\n%s\n", mensagem);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}