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
    char *p_aux; //aux ya estaba ocupado
    int longitud,veces;
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
    //Ordenamos por el método de la burbuja
    for(veces=1;veces<4;veces++){
      for(cont=0;cont<3;cont++){
          if(devuelve_longitud(palabra[cont])<devuelve_longitud(palabra[cont+1])){
                 p_aux=palabra[cont];
                 palabra[cont]=palabra[cont+1];
                 palabra[cont+1]=p_aux;
                 } 
                 //Compara la palabra cont con la siguiente y si este es menor que 0 por lo tanto se cambia si es mayor que 0 se queda igual
                 //Intercambio a tres vandas Q=P P=Y Y=Q Estructura
      }
}
    std::cout<<"\nLISTA DE PALABRAS ORDENADAS\n";
    for(cont=0;cont<4;cont++){
          printf("%s",palabra[cont]);
          std::cout<<"\n";
          }
    
    std::cin>>salir;
    }
