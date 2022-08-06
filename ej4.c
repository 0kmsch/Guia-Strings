/*
4) El usuario ingresa una palabra. Mostrar en pantalla cuántas letras A minúsculas contiene.
*/

#include <stdio.h>

int main(){
    char word[50];
    int n = 0, i, letter=0;

    printf("Ingrese una palabra: "); scanf("%s",&word);

    while(word[n] != NULL){ // Mientras que los elementos del arreglo sean caracteres NO nulos
        n++;
    }

    for(i=0; i<=n; i++){
        if(word[i] == 'a'){ // si tal letra dentro de la cadena es igual a una 'a'
            letter++;       // acumulo la cantidad de letras 'a' en letter
        }
    }

    printf("El numero de letras 'a' son: %d",letter);

}