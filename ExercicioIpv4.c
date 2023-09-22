#include <stdio.h>
#include <stdlib.h>

int main() {
    char ipv[16];
    int x, tabela;

    printf("Digite um IPv4: ");
    scanf("%s", ipv);

    int primeiraparte;
    sscanf(ipv, "%d", &primeiraparte);

    printf("Digite 1 para obter a classe do IPv4\nDigite 2 para obter os valores dos octetos em binario\nDigite 3 para encerrar o programa\n");
    scanf("%d", &x);

    if (primeiraparte >= 1 && primeiraparte <= 127) {
        tabela = 'A';
    } else if (primeiraparte >= 128 && primeiraparte <= 191) {
        tabela = 'B';
    } else if (primeiraparte >= 192 && primeiraparte <= 223) {
        tabela = 'C';
    } else if (primeiraparte >= 224 && primeiraparte <= 239) {
        tabela = 'D';
    } else if (primeiraparte >= 240 && primeiraparte <= 255) {
        tabela = 'E';
    } else {
        printf("Erro: Endereco IPv4 fora do intervalo valido.\n");
        return 1;
    }

    switch (x) {
        case 1:
            printf("Classe do IPv4: %c\n", tabela);
            break;
        case 2:
            printf("Valores dos octetos em binario: ");
            for (int i = 0; i < 4; i++) {
                for (int j = 7; j >= 0; j--) {
                    int bit = (primeiraparte >> j) & 1;
                    printf("%d", bit);
                }
                if (i < 3) {
                    printf(".");
                }
            }
            printf("\n");
            break;
        case 3:
            printf("Encerrando o programa.\n");
            break;
        default:
            printf("Erro: Opcao invalida.\n");
    }

    return 0;
}
