#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Numero(int numero) {
    int suma = 0;

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            suma += i;
        }
    }

    if (suma == numero) {
        return 1;
    } else {
        return 0;
    }
}

void encontrarNumeros() {
    for (int i = 1; i <= 1000; i++) {
        if (Numero(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    encontrarNumeros();

    return 0;
}
