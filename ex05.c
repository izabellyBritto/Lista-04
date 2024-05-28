#include <stdio.h>
int main() {
    int tempo_residencia, contador_residentes = 0, contador_insatisfeitos = 0, contador_mais_de_10_anos = 0;
    float nivel_satisfacao, soma_satisfacao = 0, media_satisfacao = 0, soma_tempo_residencia = 0, media_tempo_residencia = 0;

    while (1) {
        printf("Digite o nível de satisfação (-1 para terminar): ");
        scanf("%f", &nivel_satisfacao);

        if (nivel_satisfacao == -1)
            break;
        if (nivel_satisfacao >= 0 && nivel_satisfacao <= 10) {
            soma_satisfacao += nivel_satisfacao;

            printf("Digite o tempo de residência (em anos): ");
            scanf("%d", &tempo_residencia);

            if (tempo_residencia >= 0) {
                soma_tempo_residencia += tempo_residencia;
                contador_residentes++;

            if (nivel_satisfacao < 5) {
                    contador_insatisfeitos++;
                }
            if (tempo_residencia > 10) {
                    contador_mais_de_10_anos++;
                }
            } else {
                printf("Valor de tempo de residência inválido!\n");
            }
        } else {
            printf("Valor de nível de satisfação inválido!\n");
        }
    }
    if (contador_residentes > 0) {
        media_satisfacao = soma_satisfacao / contador_residentes;
        media_tempo_residencia = soma_tempo_residencia / contador_residentes;
    }
        float percentual_insatisfeitos = (float)contador_insatisfeitos / contador_residentes * 100;
        float percentual_mais_de_10_anos = (float)contador_mais_de_10_anos / contador_residentes * 100;

    printf("\nResultados da pesquisa:\n");
    printf("a) Média do nível de satisfação da população: %.2f\n", media_satisfacao);
    printf("b) Tempo de residência médio na cidade: %.2f anos\n", media_tempo_residencia);
    printf("c) Percentual de pessoas insatisfeitas: %.2f%%\n", percentual_insatisfeitos);
    printf("d) Percentual de pessoas que residem na cidade há mais de 10 anos: %.2f%%\n", percentual_mais_de_10_anos);
    return 0;
}