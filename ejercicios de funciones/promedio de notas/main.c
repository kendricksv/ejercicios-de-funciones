#include <stdio.h>
#include <stdlib.h>

int main()
{
    // creamos un void y que se llame verificar
void verificar() {
    // nombramos los vector nota1, nota2, nota3 y promedio
    float nota1, nota2, nota3, promedio;
//pedimos la primera nota y capturamos ese valor
    printf("ingrese la primera nota: ");
    scanf("%f", &nota1);
//pedimos las segunda nota y capturamos el segundo valor
    printf("ingrese la segunda nota: ");
    scanf("%f", &nota2);
//pedimos el otro valor y capturamos
    printf("ingrese la tercera nota: ");
    scanf("%f", &nota3);
//decimos que la sumatoria de nota 1, 2 y 3 va a ser dividida entre 3
    promedio = (nota1 + nota2 + nota3) / 3;
//imprimimos el resultado
    printf("El promedio de las notas es: %.2f\n", promedio);
//ponemos como condicion que el promedio tiene que cumplir cierta sifra para poder pasar el curso
    if (promedio >= 6.0) {
            //si cumple se va a imprimir esto
        printf("El estudiante aprobó el curso\n");
    } else {
        //si no se va a imprimir esto
        printf("El estudiante no aprobó el curso\n");
    }
}

int main()
{
    verificar();

    return 0;
}
