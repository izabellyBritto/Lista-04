#include <stdio.h>

int main() {
    char sexo;
    char estado_civil;
    int total_pessoas = 0;
    int pessoas_por_sexo[2] = {0};
    int pessoas_solteiras = 0;
    int pessoas_casadas = 0;
    int pessoas_divorciadas = 0;

    printf("Insira o sexo (M para masculino, F para feminino, X para encerrar): ");
    scanf(" %c", &sexo);
    while (sexo != 'X') {
        if (sexo == 'M') {
            pessoas_por_sexo[0]++;
        } else if (sexo == 'F') {
            pessoas_por_sexo[1]++;
        } else {
            printf("Sexo inválido.\n");
        }
        printf("Insira o estado civil (S para solteiro(a), C para casado(a), D para divorciado(a)): ");
        scanf(" %c", &estado_civil);
        if (estado_civil == 'S') {
            pessoas_solteiras++;
        } else if (estado_civil == 'C') {
            pessoas_casadas++;
        } else if (estado_civil == 'D') {
            pessoas_divorciadas++;
        } else {
            printf("Estado civil inválido.\n");
        }
        total_pessoas++;
        printf("Insira o sexo (ou X para encerrar): ");
        scanf(" %c", &sexo);
    }
    printf("\nDistribuição da população por sexo:\n");
    printf("Masculino: %d\n", pessoas_por_sexo[0]);
    printf("Feminino: %d\n", pessoas_por_sexo[1]);

    printf("\nPercentual de pessoas solteiras: %.2f%%\n", (float)pessoas_solteiras / total_pessoas * 100);
    printf("Quantidade de pessoas casadas: %d\n", pessoas_casadas);
    printf("Percentual de pessoas divorciadas: %.2f%%\n", (float)pessoas_divorciadas / total_pessoas * 100);

    return 0;
}
