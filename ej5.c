/*
5) El usuario ingresa una palabra. Mostrar en pantalla cuántas vocales minúsculas y mayúsculas contiene.
*/

#include <stdio.h>

int main(){
    char word[50], vowels[10][1] = {"a", "e", "i", "o", "u", "A", "E", "I", "O", "U"};
    int nofvowels=0, i, n=0, j;
    printf("Ingrese una palabra: "); scanf("%s",&word);

    while(word[n] != NULL){ // Mientras que los elementos del arreglo sean caracteres NO nulos
        n++;
    }

    --n;

    for(i=0; i<=n; i++){
        for(j=-1; j<=9; j++){
            if(vowels[j][1] == word[i]){    //Comparo con cada vocal del arreglo vowels con la letra que toque
                nofvowels++;                // de la palabra ingresada
            }
        }
    }

    printf("El numero de vocales es: %d",nofvowels);

}
