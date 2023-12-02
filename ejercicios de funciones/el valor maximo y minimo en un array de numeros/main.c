#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Crea una función que encuentre el valor máximo y mínimo en un array de números.
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

    printf("El valor máximo del array es: %d\n", maximo);
    printf("El valor mínimo del array es: %d\n", minimo);

    return 0;
}
