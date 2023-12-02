#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Desarrolla una función que determine si un número es par o impar
//le damos el valor de retorno que es void que dice que se va a ejecutar y ya y la variable verificar que va a hacer de numero intero
void verificar (int num) {
    //aqui evaluamos num si 2 == 0
    if (num % 2 == 0)
        //se imprimera es par si no se imprime es impar
        printf("El numero %d es par.\n", num);
    else
        printf("El numero %d es impar.\n", num);
}

int main() {
    verificar(9);
    verificar(4);
    return 0;
}
