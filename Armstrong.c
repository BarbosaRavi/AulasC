#include <stdio.h>
#include <string.h>
int certo(char *str) {
    int tamanho = strlen(str);
    int numero = 0;
    int numeroOriginal = atoi(str);
    for (int posicao = 0; posicao < tamanho; posicao++) {
        int digit = str[posicao] - '0';
        int potencia = 1;

        for (int j = 0; j < tamanho; j++) {
            potencia *= digit;
        }
        numero += potencia;
    }
    if (numero == numeroOriginal) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    char str[100];
    printf("Digite um numero: ");
    scanf("%s", str);
    if (certo(str)) {
        printf("%s e um numero de Armstrong.\n", str);
    } else {
        printf("%s nao e um numero de Armstrong.\n", str);
    }
    return 0;
}
