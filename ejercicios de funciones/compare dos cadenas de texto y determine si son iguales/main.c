#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Escribe una función que compare dos cadenas de texto y determine si son iguales.
//creamos las variables de caracteres llamados cadena 1 y 2
int comparador (char *cadena1, char *cadena2) {
    //verificamos
    if (strcmp(cadena1, cadena2) == 0)
        return 1;
    else
        return 0;
}

int main() {
    //damos valores
    char *cadena1 = "Fifa";
    char *cadena2 = "Fifa";
//verificamos si cadena 1 y 2 se parecen si es asi se va a imprimir que son igaules si no se imprime que no son iguales
    if (comparador(cadena1, cadena2))
        printf("Las cadenas son iguales.\n");
    else
        printf("Las cadenas no son iguales.\n");

    return 0;
}
