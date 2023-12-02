#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Crea una función que calcule la potencia de un número dado.
//damos valor de retorno y nombramos las variables
double potencia(double base, double exponente) {

    return pow(base, exponente);
}

int main() {
    //le damos valor a la base y al exponente
    double base = 9.0;
    double exponente = 2.0;
    double resultado = potencia(base, exponente);

    printf("La potencia de %.2f elevado a %.2f es: %.2f\n", base, exponente, resultado);

    return 0;
}
