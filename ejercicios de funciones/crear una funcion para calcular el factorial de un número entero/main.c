#include <stdio.h>
#include <stdlib.h>

int main()
{
    //utilizamos long que se utiliza para almacenar valores enteros que son demasiados grandes para el tipo de datos int y indicamos el nombre de la variable m
long factorial(int m){
    //aqui verificamos si m es igual a 0
     if (m==0)
        return 1;
        //aqui verificamos como es falso va apasar al proceso de factorizacion y a la variable m se le va a restar cada ves 1
    else
        return m * factorial(m-1);
     }
int main(){
    // damos un valor
    int numero = 7;
    //aqui decimos que resultado es la factorizacion de el numero que dimos
    long resultado = factorial (numero);
    //con esto imprimimos el resultado
    printf("El resultado de %d es: %ld\n", numero, resultado);

    return 0;
}
