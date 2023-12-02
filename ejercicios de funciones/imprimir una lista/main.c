#include <stdio.h>
#include <stdlib.h>

int main()
{
    //creamos void que va a ser llamado lista
void lista() {
    //creamos la lista
    int list1[] = {50,60,70,80,90};
    //comenzamos con el bucle
    for (int i=4; i>=0; i--){
   //evaluamos si i es == 0 si es asi se detiene y se imprime
        if (list1 [i]==0){
            break;
        }
        printf("%d", list1 [i]);
        //esto imprime un salto de lineas
        printf("\n");
    }
}

int main()
{
    //al final se coloca que se va imprimir lista
    lista();

    return 0;
}
