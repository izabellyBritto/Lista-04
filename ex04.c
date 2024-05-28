#include <stdio.h>

int main() {
    float renda, somaRenda = 0, mediaRenda, maiorMediaRenda = 0;
    int contadorProfissoes = 0, contadorDesempregados = 0, contadorRendaAcima5000 = 0;

    while (1) {
        printf("Digite a renda mensal (ou 'x' para terminar): ");
        if (scanf("%f", &renda) != 1) {
            break;
        }

        if (renda >= 0) {
            somaRenda += renda;
            contadorProfissoes++;
            if (renda > maiorMediaRenda) {      
                    maiorMediaRenda = renda;
            }
            if (renda == 0) {
                    contadorDesempregados++;
            }
            if (renda > 5000) {
                    contadorRendaAcima5000++;
            }
        } else {
            printf("Valor de renda inválido!\n");
        }
    }
    mediaRenda = somaRenda / contadorProfissoes;

    printf("\nResultados da pesquisa:\n");
    printf("a) Média da renda mensal da população: R$ %.2f\n", mediaRenda);
    printf("b) Profissão com maior média de renda: R$ %.2f\n", maiorMediaRenda);
    printf("c) Percentual de pessoas desempregadas: %.2f%%\n", (float)contadorDesempregados / contadorProfissoes * 100);
    printf("d) Percentual de pessoas com renda acima de R$ 5000,00: %.2f%%\n", (float)contadorRendaAcima5000 / contadorProfissoes * 100);
    return 0;
}
