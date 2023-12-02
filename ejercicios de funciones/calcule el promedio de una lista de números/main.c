#include <stdio.h>
#include <stdlib.h>

int main()
{
    //utilizamos double para el bucle que va a hacer el valor de retorno y vamos a tener dos variables una nums y otra longitud
double promedio(int nums[], int longitud) {
    //suma va a ser igual a 0
    int suma = 0;
    //utlizamos for para realizar el bucle dice i tiene que ser igual a 0 y si i < longitud va a ir aumentando
    for(int i = 0; i < longitud; i++) {
        suma += nums[i];
    }
    return (double)suma / longitud;
}

int main() {
    //damos valores
    int numeros[] = {1, 2, 3, 4, 5};
    int longitud = sizeof(numeros) / sizeof(numeros[0]);
    double resultado = promedio(numeros, longitud);

    printf("El promedio es: %.2f\n", resultado);  // Imprime: El promedio es: 3.00

    return 0;
}
