#include <stdio.h>
int main() {
    int cor_da_pele;
    int ensino_superior_completo = 0;
    int ensino_medio_incompleto = 0;
    int total_pessoas = 0;
    int pessoas_por_cor[5] = {0};

    printf("Insira a cor da pele (0 para branco, 1 para preto, 2 para pardo, 3 para amarelo, 4 para indígena): ");
    scanf("%d", &cor_da_pele);

    while (cor_da_pele != -1) {
        if (cor_da_pele >= 0 && cor_da_pele <= 4) {
            pessoas_por_cor[cor_da_pele]++;
            total_pessoas++;

            int grau_escolaridade;
            printf("Insira o grau de escolaridade (0 para ensino médio incompleto, 1 para ensino superior completo): ");
            scanf("%d", &grau_escolaridade);
            if (grau_escolaridade == 0) {
                ensino_medio_incompleto++;
            } else if (grau_escolaridade == 1) {
                ensino_superior_completo++;
            }
        } else {
            printf("Cor da pele inválida.\n");
        }
        printf("Insira a cor da pele (ou -1 para encerrar): ");
        scanf("%d", &cor_da_pele);
    }
    printf("\nDistribuição da população por cor da pele:\n");
    printf("Branco: %d\n", pessoas_por_cor[0]);
    printf("Preto: %d\n", pessoas_por_cor[1]);
    printf("Pardo: %d\n", pessoas_por_cor[2]);
    printf("Amarelo: %d\n", pessoas_por_cor[3]);
    printf("Indígena: %d\n", pessoas_por_cor[4]);
    printf("\nPercentual de pessoas com ensino superior completo: %.2f%%\n", (float)ensino_superior_completo / total_pessoas * 100);
    printf("Percentual de pessoas com ensino médio incompleto: %.2f%%\n", (float)ensino_medio_incompleto / total_pessoas * 100);
   
    return 0;
}
