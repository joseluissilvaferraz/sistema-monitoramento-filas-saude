#include <stdio.h>

int senha[100];
int sala[100];

int inicio = 0;
int fim = 0;

void adicionarPaciente() {
    printf("\nDigite a senha do paciente: ");
    scanf("%d", &senha[fim]);

    printf("Digite a sala (1, 2 ou 3): ");
    scanf("%d", &sala[fim]);

    fim++;

    printf("Paciente adicionado com sucesso!\n");
}

void chamarPaciente() {
    if (inicio == fim) {
        printf("\nFila vazia!\n");
    } else {
        printf("\n");
        printf("====================================\n");
        printf("    UNIDADE DE SAUDE MUNICIPAL\n");
        printf("====================================\n");
        printf("      PAINEL DE CHAMADAS\n");
        printf("====================================\n");
        printf("        SENHA: %d\n", senha[inicio]);
        printf("      DIRIJA-SE A SALA %d\n", sala[inicio]);
        printf("====================================\n");

        inicio++;
    }
}

void mostrarFila() {
    int i;

    if (inicio == fim) {
        printf("\nFila vazia!\n");
    } else {
        printf("\n====================================\n");
        printf("          FILA DE ESPERA\n");
        printf("====================================\n");

        for (i = inicio; i < fim; i++) {
            printf("Senha: %d  |  Sala: %d\n",
                   senha[i], sala[i]);
        }

        printf("====================================\n");
    }
}

int main() {
    int opcao;

    do {
        printf("\n");
        printf("====================================\n");
        printf(" SISTEMA DE FILAS - UNIDADE SAUDE\n");
        printf("====================================\n");
        printf("1 - Adicionar Paciente\n");
        printf("2 - Chamar Paciente\n");
        printf("3 - Mostrar Fila\n");
        printf("0 - Sair\n");
        printf("====================================\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarPaciente();
                break;

            case 2:
                chamarPaciente();
                break;

            case 3:
                mostrarFila();
                break;

            case 0:
                printf("\nEncerrando sistema...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
