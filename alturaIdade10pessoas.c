#include <stdio.h>

int main() {
    float h[10], alturaTotal = 0;
    int i[10], menor18 = 0, maiorAltura = 0, idadeTotal = 0;

    for (int j = 0; j < 10; j++) {
        printf("Entre a idade da %da pessoa:\n ", j + 1);
        scanf("%d", &i[j]);
        printf("Entre a altura da %da pessoa:\n ", j + 1);
        scanf("%f", &h[j]);
        idadeTotal += i[j];
        alturaTotal += h[j];

        if (h[j] > h[maiorAltura]) {
            maiorAltura = j;
        }

        if (i[j] < 18) {
            menor18++;
        }
    }

    float mediaIdade = (float)idadeTotal / 10;
    printf("\nA pessoa mais alta tem %.2f metros de altura.\n", h[maiorAltura]);
    printf("A media das idades e %.2f anos.\n", mediaIdade);
    printf("A quantidade de pessoas com menos de 18 anos e %d.\n", menor18);

    return 0;
}
