#include <stdio.h>
#include <math.h>

int main() {
    int numeros;
    char letras;

    printf("Digite um numero inteiro qualquer:\n");
    scanf("%d", &numeros);
    printf("Digite 'p' para elevar ao quadrado e 'r' para tirar a raiz:\n");
    scanf(" %c", &letras);

    switch (letras) {
        case 'p':
            printf("O quadrado do numero e: %d\n", numeros * numeros);
            break;
        case 'r':
            if (numeros >= 0) {
                double raiz = sqrt(numeros);
                printf("A raiz quadrada do numero e: %lf\n", raiz);
            } else {
                printf("Numero negativo. A raiz quadrada nao e valida.\n");
            }
            break;
        default:
            printf("Letra desconhecida.\n");
    }

    return 0;
}
