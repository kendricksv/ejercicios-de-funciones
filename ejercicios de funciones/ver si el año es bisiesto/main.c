#include <stdio.h>
#include <stdlib.h>

int main()
{
    //chequea si el años es bisiestro
// comenzamos con void y necesitamos un vector anio
void Chequeaelanofeo(int anio) {
    //hacemos la evaluacion
    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
            //si cumple se va a imprimir
        printf("El año %d es bisiesto.\n", anio);
    //si es falso esto
    } else {
        printf("El año %d no es bisiesto.\n", anio);
    }
}
int main(){
    //creamos una variable int llamada anio
    int anio;
    //pedimos el año
    printf("ingresa el año: ");
    //capturamos
    scanf("%d", &anio);
    //le indicamos que el resultado del año va a ir en anio
    Chequeaelanofeo(anio);

    return 0;
}
