#include <stdio.h>
#include <stdlib.h>

int main()
{
    //comenzamos con void y creamos una variable que se llame numero
void multiplicacion(int numero) {
    //comenzamos la evaluacion
    for(int i=1; i<=10; i = i + 1){
            //imprimimos
        printf("%d * %d = %d\n",numero, i , i * numero);
    }
}
int main(){
    //creamos una variable numero
    int numero;
    //le pedimos un numero al usuario
    printf("Ingrese un numero: ");
    //capturamos
    scanf("%d", &numero);
    multiplicacion(numero);

    return 0;
}
