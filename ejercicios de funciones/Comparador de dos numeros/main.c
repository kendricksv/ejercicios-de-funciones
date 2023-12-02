#include <stdio.h>
#include <stdlib.h>

int main()
{
    //itulizamos void para hacer la funcion, y necesitamos dos vectores numero 1 y numero 2
void compara(int numero1, int numero2) {
    //si numero 1 es mayor a numero 2 entonces el primer numero es mayor
    if (numero1 > numero2){
        printf("El primer numero es mayor");
    }
    //Si es falso pues imprimira que el segundo numero es mayor
    else if (numero1 < numero2){
        printf ("El segundo numero es mayor");
    }
}
int main(){
    //tenemos las variables numero 1 y 2
    int numero1, numero2;
    //le pedimos el numero 1 al usuario
    printf("dame el primer numero: ");
    //capturamos
    scanf("%d", &numero1);
    //le pedimos el segundo numero
    printf("dame el segundo numero: ");
    //capturamos
    scanf("%d", &numero2);
    //y le decimos que va a comparar numero 1 y numero 2
    compara(numero1, numero2);

    return 0;
}
