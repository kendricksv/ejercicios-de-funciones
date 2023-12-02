#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Crea una función que tome dos números como parámetros y devuelva su suma//
//Necesitamos dos vectores a y b//
int suma(int a ,int b){
    //Tambien necesitamos la formula para la suma para que la funcion la lea//
    return a + b;
}

int main(){
    //le damos valores a (a y b), y ponemos que el resultado va a ser la suma del vector a y b o 10 y 5 en este caso//
    int resultado = suma (10 , 5);
    //Aqui con este printf se encarga de imprimir el resultado que nos dara 15//
    printf("%d\n", resultado);

    return 0;
}
