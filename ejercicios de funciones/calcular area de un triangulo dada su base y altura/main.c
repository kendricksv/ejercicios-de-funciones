#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Crea una función que calcule el área de un triángulo dados su base y altura.
//Creamos las variables
double area(double base, double altura) {
    //ponemos la formula
    return (base * altura) / 2;
}

int main() {
    //damos valores
    double base = 5.0;
    double altura = 10.0;
    double areatriangulo= area(base, altura);

    printf("El área del triángulo con base %.2f y altura %.2f es: %.2f\n", base, altura, area);

    return 0;
}
