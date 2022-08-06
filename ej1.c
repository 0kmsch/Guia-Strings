/*
1) Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras
tiene la palabra ingresada. Por ejemplo "CASA" debe indicar 4 letras.
*/

#include <stdio.h>

int main(){
    char word[20];
    int i = 0;

    printf("Ingrese una palabra de hasta 20 letras: "); scanf("%s",&word);

    while(word[i] != NULL){ // Mientras que los elementos del arreglo sean caracteres NO nulos
        i++;
    }

    printf("La palabra ingresada tiene %d letras.",i);
}