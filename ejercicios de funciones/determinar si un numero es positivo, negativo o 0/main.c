#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Implementa una funcion que determine si un numero ingresado es positivo, negativo o cero.
//Aqui nombramos el valor de retorno en este caso void que le estamos indicando que solo se ejecuta y ya y aparte llamamos la variable verificar//
void verificar (int num){
    //verificamos si num > 0 es positivo//
    if (num > 0)
        //si cumple se va a imprimir la condicion//
        printf("El numero es positivo.\n");
    //si es falso si num es < 0 se va a imprimir que el numero es negativo//
        else if (num < 0)
            printf("el numero es negativo.\n");
            //Si es falso todo esto se imprimira que es 0//
        else
            printf("el numero es cero.\n");
    }
int main(){
    //aqui tenemos los valores positivo
    verificar(9);
    //negativo
    verificar(-5);
    // y 0
    verificar(0);

    return 0;
}
