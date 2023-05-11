#include <stdio.h>

int main()
{
    float numero1, numero2, resultado;
    char operador;

    printf("Ingrese el calculo: ");
    scanf("%f %c %f", &numero1, &operador, &numero2);

    if (operador == '+')
    {
        resultado = numero1 + numero2;
        printf("%f\n", resultado);
    }
    else if (operador == '-')
    {
        resultado = numero1 - numero2;
        printf("%f\n", resultado);
    }
    else if (operador == '*')
    {
        resultado = numero1 * numero2;
        printf("%f\n", resultado);
    }
    else if (operador == '/')
    {
        resultado = numero1 / numero2;
        printf("%f\n", resultado);
    }
    else
    {
        printf("Error: operador no reconocido\n");
    }

    return 0;
}