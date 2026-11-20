
#include <stdio.h>
#include <string.h>

#define MAX 5
#define FATORES 13

float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

int calcularPontuacao(float dados[]) {
    int pontos = 0;
    float imc;

    if (dados[0] >= 65) {
        pontos += 3;
    }

    if (dados[1] >= 160) {
        pontos += 3;
    }

    if (dados[2] == 1) {
        pontos += 3;
    }

    if (dados[3] == 1) {
        pontos += 2;
    }

    if (dados[4] == 1) {
        pontos += 2;
    }

    if (dados[5] >= 160) {
        pontos += 2;
    }

    imc = calcularIMC(dados[6], dados[7]);

    if (imc >= 30) {
        pontos += 2;
    }

    if (dados[8] == 1) {
        pontos += 1;
    }

    if (dados[9] == 1) {
        pontos += 1;
    }

    if (dados[10] == 1) {
        pontos += 1;
    }

    if (dados[11] == 1) {
        pontos += 1;
    }

    if (dados[12] == 1) {
        pontos += 1;
    }

    return pontos;
}

void classificarRisco(int pontos, char classificacao[]) {
    if (pontos <= 4) {
        strcpy(classificacao, "Menor de 10%");
    }
    else if (pontos <= 9) {
        strcpy(classificacao, "Entre 10% e 20%");
    }
    else if (pontos <= 14) {
        strcpy(classificacao, "Entre 20% e 30%");
    }
    else if (pontos <= 18) {
        strcpy(classificacao, "Entre 30% e 50%");
    }
    else {
        strcpy(classificacao, "Acima de 50%");
    }
}

int main() {
    char nomes[MAX][100];
    char classificacoes[MAX][30];

    float fatores[MAX][FATORES];

    int quantidade;
    int i;
    int pontos;

    printf("====================================\n");
    printf("     SISTEMA DE ANALISE DE RISCO\n");
    printf("====================================\n");

    printf("\nQuantidade de pacientes (maximo 5): ");
    scanf("%d", &quantidade);
    getchar();

    if (quantidade < 1 || quantidade > MAX) {
        printf("Quantidade invalida!\n");
        return 0;
    }

    for (i = 0; i < quantidade; i++) {

        printf("\n====================================\n");
        printf("Cadastro do paciente %d\n", i + 1);
        printf("====================================\n");

        printf("Nome: ");
        fgets(nomes[i], 100, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';

        printf("Idade: ");
        scanf("%f", &fatores[i][0]);

        printf("Pressao arterial sistolica (mmHg): ");
        scanf("%f", &fatores[i][1]);

        printf("Tabagismo (1 - Sim / 0 - Nao): ");
        scanf("%f", &fatores[i][2]);

        printf("Diabetes (1 - Sim / 0 - Nao): ");
        scanf("%f", &fatores[i][3]);

        printf("Historico de doenca cardiaca (1 - Sim / 0 - Nao): ");
        scanf("%f", &fatores[i][4]);

        printf("Colesterol LDL (mg/dL): ");
        scanf("%f", &fatores[i][5]);

        printf("Peso (kg): ");
        scanf("%f", &fatores[i][6]);

        printf("Altura (m): ");
        scanf("%f", &fatores[i][7]);

        printf("Sedentarismo (1 - Sim / 0 - Nao): ");
        scanf("%f", &fatores[i][8]);

        printf("Alimentacao rica em ultraprocessados (1 - Sim / 0 - Nao): ");
        scanf("%f", &fatores[i][9]);

        printf("Estresse cronico elevado (1 - Sim / 0 - Nao): ");
        scanf("%f", &fatores[i][10]);

        printf("Sono inadequado (1 - Sim / 0 - Nao): ");
        scanf("%f", &fatores[i][11]);

        printf("Sexo biologico masculino (1 - Sim / 0 - Nao): ");
        scanf("%f", &fatores[i][12]);

        getchar();
    }

    for (i = 0; i < quantidade; i++) {

        pontos = calcularPontuacao(fatores[i]);

        classificarRisco(pontos, classificacoes[i]);
    }

    printf("\n\n====================================\n");
    printf("       SISTEMA DE ANALISE DE RISCO\n");
    printf("====================================\n");

    printf("\nQuantidade de pacientes: %d\n", quantidade);

    for (i = 0; i < quantidade; i++) {
        printf("Paciente %d: %s\n", i + 1, nomes[i]);
    }

    printf("\n====================================\n");
    printf("          RELATORIO DE RISCO\n");
    printf("====================================\n");

    for (i = 0; i < quantidade; i++) {
        printf("\nPaciente: %s\n", nomes[i]);
        printf("Classificacao: %s\n", classificacoes[i]);
    }

    printf("\n====================================\n");
    printf("          FIM DO PROGRAMA\n");
    printf("====================================\n");

    return 0;
}
