/*
3) El usuario ingresa dos strings. Mostrar en pantalla si son iguales o no, es decir, si tienen las mismas
letras en las mismas posiciones.
*/

#include <stdio.h>

int main(){
    char str1[50], str2[50];
    int n1=0,n2=0, i, flag=0;

    printf("Ingrese una cadena: "); scanf("%s",&str1);
    printf("Ingrese otra cadena: "); scanf("%s",&str2);

    while(str1[n1] != NULL){
        n1++;
    }
    while(str2[n2] != NULL){
        n2++;
    }                               // Cuento el numero de letras de los 2 strings

    if(n1 == n2){                   // Si los 2 strings tienen el mismo N letras
        for(i=0; i<n1; i++){        // desde i=0, mientras que i sea menor a Nletras, sumar 1 a i
            if(str1[i] != str2[i]){ // si el caracter de ambas cadenas discrepan
                flag = 1;           // se "activa" el flag
            }
        }

        if(flag==0){
            printf("Las palabras son identicas");
        }    
        else{
            printf("Las palabras son distintas");
        }
    }
    else{
        printf("Las palabras son distintas");  
    }
}