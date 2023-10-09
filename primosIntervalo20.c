#include <stdio.h>

int main() {
    for (int i = 1; i <= 20; i++) {
        int divisores = 0;

        for (int x = 1; x <= i; x++) {
            if (i % x == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("Eh primo: %d\n", i);
        }
    }

    return 0;
}
