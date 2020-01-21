#include<iostream>
#include<stdio.h>
#include<stdlib.h>
int main(){
       int a;
       char salir;
       a=2;
       printf("El numero x = %d y esta almacenado en %X",a,&a); 
       //&a: saca el numero binario donde está almacenado a a[ 2 ]11AB00 numero binario y es la posición de memoria donde almacena la variable a
       //El ordenador tiene dos formas de llamar(por su nombre o por su numero) es decir por la a o por la &a.
       //%d es el descriptor ya que nos indica que tipo nos va a salir y en este caso es un numero entero
       //%f con un fload (numero decimal) y %c con una letra y %X numero hexadecimal
       
       std::cin>>salir;
}
       
