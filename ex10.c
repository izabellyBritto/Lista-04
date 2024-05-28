#include <stdio.h>

int main() {
    int linhas;

    printf("Digite o número de linhas da pirâmide: ");
    scanf("%d", &linhas);

    for(int i = 1; i <= linhas; i++) {
        for(int espacos = 1; espacos <= linhas - i; espacos++) {
            printf("  ");
        }
        for(int numeros = 1; numeros <= i; numeros++) {
            printf("%d ", numeros);
        }
        for(int numeros = i - 1; numeros >= 1; numeros--) {
            printf("%d ", numeros);
        }
    printf("\n");
    }
    return 0;
}
