/*
2) Permitir el ingreso de una palabra y mostrarla en pantalla al revés.
Por ejemplo, para "CASA" se debe mostrar "ASAC".
*/

#include <stdio.h>

int main(){
    char word[50];
    int n=0, i=0;
    char prev;

    printf("Ingrese una palabra: "); scanf("%s",&word);
    while(word[n] != NULL){ // Mientras que los elementos del arreglo sean caracteres NO nulos
        n++;
    }

    for(n--; n>=i; n--){ // Para el numero de letras menos 1, mientras que sea mayor igual a i, restar 1 a n
        prev = word[i]; // guardo en prev la letra previa a reemplazarla
        word[i] = word[n]; // en el primer ciclo esto haria que la primera letra se cambie por la ultima
        word[n] = prev; // y aca la ultima letra se cambiaria por la primera que guardamos antes en prev
        i++;
    }

    printf("%s",word);

}