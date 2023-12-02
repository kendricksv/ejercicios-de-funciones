#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Crea una funci�n que encuentre el valor m�ximo y m�nimo en un array de n�meros.
void encontrarMaximoYMinimo(int arr[], int size, int *maximo, int *minimo) {
    *maximo = arr[0];
    *minimo = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > *maximo) {
            *maximo = arr[i];
        }

        if (arr[i] < *minimo) {
            *minimo = arr[i];
        }
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maximo, minimo;

    encontrarMaximoYMinimo(arr, size, &maximo, &minimo);

    printf("El valor m�ximo del array es: %d\n", maximo);
    printf("El valor m�nimo del array es: %d\n", minimo);

    return 0;
}
