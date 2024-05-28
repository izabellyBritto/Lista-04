#include <stdio.h>

int main() {
    int idade, total_idades = 0, contagem_idades = 0, contagem_altura_acima_180 = 0;
    float altura, total_alturas = 0.0;
    int maior_idade = 0;
    printf("Digite a idade e altura dos habitantes (para encerrar, digite uma idade negativa):\n");
    
    while (1) {
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade < 0)
            break;
        printf("Altura (em metros): ");
        scanf("%f", &altura);

        total_idades += idade;
        total_alturas += altura;
        contagem_idades++;

        if (idade > maior_idade)
            maior_idade = idade;

        if (altura > 1.80)
            contagem_altura_acima_180++;
    }
    if (contagem_idades > 0) {
        printf("\nEstatísticas da população:\n");
        printf("a) Média da idade: %.2f\n", (float)total_idades / contagem_idades);
        printf("b) Média da altura: %.2f metros\n", total_alturas / contagem_idades);
        printf("c) Maior idade registrada: %d\n", maior_idade);
        printf("d) Percentual de pessoas com altura acima de 1,80 metros: %.2f%%\n", 
               (float)contagem_altura_acima_180 / contagem_idades * 100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }
    return 0;
}
