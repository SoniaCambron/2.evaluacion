#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int devuelve_longitud(char aux[]){
//Le envido el hexadecimal por eso aux[] no tiene numero dentro
     int cont=0;
     int longitud=0;
     while(aux[cont]!='\0'){
           longitud++;
           cont++;
           }
     return(longitud);
}

int main(){
    char *palabra[4];
    char salir;
    int cont;
    char aux[20];
    int longitud;
    //leo cuatro palabras
    for(cont=0;cont<4;cont++){
          std::cout<<"Palabra: ";
          std::cin>> aux;
          longitud=devuelve_longitud(aux);
          palabra[cont]=(char *)malloc((longitud+1)*sizeof(char));
          strcpy(palabra[cont],aux);
          //Copia la cadena de caracteres de aux a su sitio reservado (destino,origen)
          //Es una funcion que esta pensada para que los dos parametros sean la posición de memoria para cada letra. (11AB02,34BG99)
          //Reserva el sitio con la longitud de la palabra 0,1,2,3 más 1 ya que tiene que estar el \0
          //sizeof() tamaño de la letra, el numero
          //(char*) te obliga a que lo que se guarde sea una letra
          }
    std::cout<<"\nLISTA DE PALABRAS\n";
    for(cont=0;cont<4;cont++){
          printf("%s",palabra[cont]);
          std::cout<<"\n";
          }
    
    std::cin>>salir;
    }
