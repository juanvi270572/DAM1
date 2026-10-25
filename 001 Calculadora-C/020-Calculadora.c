/*
    Programa: Calculadora de IVA
    Version: 0.2
    Autor: Juan Vicente Gallart
*/

#include <stdio.h>

int main(void) {
    double base;
    double iva;
    double total;

    /* Limpiar pantalla y posicionar el cursor (ANSI) */
    printf("\033[2J\033[H");

    /* Cabecera */
    printf("\033[1;36m");
    printf("+--------------------------------------------------+\n");
    printf("|              CALCULADORA DE IVA                  |\n");
    printf("+--------------------------------------------------+\n");
    printf("\033[0m\n");

    /* Entrada de datos */
    printf("\033[1;33mIntroduce la base imponible: \033[0m");

    if (scanf("%lf", &base) != 1 || base < 0) {
        printf("\033[1;31mError: introduce una cantidad valida.\033[0m\n");
        return 1;
    }

    /* Calculos */
    iva = base * 0.21;
    total = base + iva;

    /* Resultados */
    printf("\n\033[1;36m");
    printf("+--------------------------------------------------+\n");
    printf("\033[0m");

    printf("  Base imponible:              %12.2f EUR\n", base);
    printf("  IVA (21%%):                   %12.2f EUR\n", iva);

    printf("\033[1;36m");
    printf("+--------------------------------------------------+\n");
    printf("\033[0m");

    printf("\033[1;32m");
    printf("  TOTAL FACTURA:               %12.2f EUR\n", total);
    printf("\033[0m");

    printf("\033[1;36m");
    printf("+--------------------------------------------------+\n");
    printf("\033[0m\n");

    printf("\033[1;33mGracias por utilizar la calculadora.\033[0m\n");

    return 0;
}