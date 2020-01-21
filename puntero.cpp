#include<iostream>
#include<stdio.h>
#include<stdlib.h>
int main(){
       int a;
       int *pa;//*pa es un puntero que guarda un numero hexadecimal, que se supone que es el lugar donde se almacena otra variable
       char salir;
       int numeros[5];
       a=2;
       numeros[0]=9;
       numeros[1]=8;
       numeros[2]=7;
       numeros[3]=6;
       
       pa=&a; //si no se pone no sale lo mismo porque no almacena la de a
       printf("El numero x = %d y esta almacenado en %X",a,&a); 
       printf("\nLa variable pa es un puntero pa=%X",pa);
       printf("\nnumeros[0]=%d",numeros[0]);
       printf("\nnumeros[1]=%d",numeros[1]);
       printf("\nnumeros[2]=%d",numeros[2]);
       printf("\nnumeros[3]=%d",numeros[3]);
       printf("\nnumeros[4]=%d",numeros[4]);
       printf("\nnumeros[5]=%d",numeros[5]);
       printf("\nnumeros=%d",*numeros);
       printf("\nnumeros=%d",*(numeros+1));
       //numeros[ 9 ][ 8 ][ 7 ][   ] [   ] numero binario de cada uno
       std::cin>>salir;
}
       
