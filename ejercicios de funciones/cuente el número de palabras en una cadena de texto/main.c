#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Implementa una función que cuente el número de palabras en una cadena de texto.
int contarPalabras(char *cadena) {
    int contador = 0;
    char *palabra = strtok(cadena, " ");

    while (palabra != NULL) {
        contador++;
        palabra = strtok(NULL, " ");
    }

    return contador;
}

int main() {
    char cadena[] = "Hola que fue";
    int numeroDePalabras = contarPalabras(cadena);

    printf("El numero de palabras en la cadena es: %d\n", numeroDePalabras);

    return 0;
}
