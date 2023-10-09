#include <stdio.h>
int main()
{
    int cargo, aumento, salario=1000;
    printf ("Entre o codigo do cargo para visualizar o salario antes e depois do aumento:\n");
    printf ("101 Gerente\n");
    printf ("102 Engenheiro\n");
    printf ("103 Tecnico\n");
    printf ("104 Administrativo\n");
    printf ("105 Auxiliar\n");
    scanf("%d", &cargo);

    switch (cargo)
    {
    case 101:
        aumento = salario+salario*0.1;
        printf ("O salario antigo era R$1.000, depois do aumento, ficou: R$%d", aumento);
        break;

    case 102:
        aumento = salario+salario*0.2;
        printf ("O salario antigo era R$1.000, depois do aumento ficou: R$%d", aumento);
        break;

    case 103:
        aumento = salario+salario*0.32;
        printf ("O salario antigo era R$1.000, depois do aumento ficou: R$%d", aumento);
        break;

    case 104:
        aumento = salario+salario*0.37;
        printf ("O salario antigo era R$1.000, depois do aumento ficou: R$%d", aumento);
        break;

    case 105:
        aumento = salario+salario*0.4;
        printf ("O salario antigo era R$1.000, depois do aumento ficou: R$%d", aumento);
        break;

    default:
        printf ("Codigo Invalido");
        break;
    }
    return 0;
}
