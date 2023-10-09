#include <stdio.h>
int main()
{
    float pi=3.14, r, area;
    printf ("Insira o raio da circunferencia para calcular a area:\n");
    scanf ("%f", &r);
    area = r*r*pi;
    printf ("A area da circunferencia eh: %f", area);
    return 0;
}

