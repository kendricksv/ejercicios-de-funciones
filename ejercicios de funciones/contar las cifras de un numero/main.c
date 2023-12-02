#include <stdio.h>
#include <stdlib.h>

int main()
{
    //necesitamos un contador y numeros
int contador(int numero) {
    //una cifra que va a comenzar desde 0
    int cifras = 0;
//la evaluacion que dice que numero tiene que ser == 0
    if (numero == 0) {
            //cifras tiene que ser = 1
        cifras = 1;
    //si es falso pasa a un bucle
    } else {
        cifras = floor(log10(abs(numero))) + 1;
    }
//y retorna a cifras el bucle
    return cifras;
}

int main() {
    int numero;
//pedimos un numero y capturamos
    printf("Ingrese un número: ");
    scanf("%d", &numero);
//Imprimimos
    printf("El número %d tiene %d cifras.\n", numero, contador(numero));

    return 0;
}
