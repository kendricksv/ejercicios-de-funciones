#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Implementa una función que invierta los dígitos de un número.
// Le damos el valor de retorno que va a hacer intero y una variable que se va a llamar invertir
int invertir(int num) {
    // invertido va a hacer = 0
    int invertido = 0;
    //evaluamos num
    while (num != 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    return invertido;
}

int main() {
    //damos valores
    int numero = 12345;
    //resultado va a hacer = a el valor de invertir
    int resultado = invertir(numero);
    printf("%d\n", resultado);

    return 0;
}
