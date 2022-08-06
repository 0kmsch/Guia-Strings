/*
7) El usuario ingresará 5 nombres de personas y sus edades (número entero). 
Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven.
El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda,
etc...
Nota: no hay que almacenar todos los nombres y todas las notas.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char nombre[50], name[50];
    int i, edad, max=1000;

    for(i=0; i<=5; i++){
        printf("Digite el nombre y la edad num. %d: ",i);
        scanf("%s",&nombre);
        scanf("%d",&edad);
        if(edad < max){
            max = edad;
            strcpy(name, nombre);
        }
    }

    printf("Nombre: %s, Edad: %d",name,max);

}