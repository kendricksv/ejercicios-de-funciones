#include <stdio.h>
#include <stdlib.h>

int main()
{
    //determina si un numero es perfecto
//creamos un valor int y una variable llamada num
int Numero(int num) {
    //int es suma y tiene que ser = 0
    int suma = 0;
//empesamos la evaluacion
    for (int i = 1; i < num; i++) {
            //si cumple i es == 0
        if (num % i == 0) {
            //suma tiene que ser i
            suma += i;
        }
    }
//suma tiene que ser igual a num
    if (suma == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    //creamos una variable
    int num;
//pedimos un valor y capturamos ese valor
    printf("Ingrese un número: ");
    scanf("%d", &num);
//si cumple se imprimera
    if (Numero(num)) {
        printf("%d es un número perfecto.\n", num);
    } else {
        //si no se imprimira
        printf("%d no es un número perfecto.\n", num);
    }

    return 0;
}
