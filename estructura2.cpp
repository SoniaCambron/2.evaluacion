#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char salir;
    int cont;
    typedef struct{
       char nombre[20];
       int edad;
       char email[20];
       } datosPersona;
    
    datosPersona alumno[3];;
    datosPersona *p_aux;
    p_aux=&alumno[3]; //Sacar el numero hexadecimal, que te diga la direccion de alumno1
    p_aux=(datosPersona *)malloc(3*sizeof(datosPersona));
    //3 de tres alumnos y con esto nos guarda sitio en la memoria para datosPersona.
    //Los transforma en un puntero(dP *)
    for(cont=0;cont<3;cont++){
        std::cout<<"Tu eres mi alumno "<<cont+1;
        std::cout<<"\nDime tu nombre: ";
        std::cin>>alumno[cont].nombre;
        std::cout<<"\nDime tu edad: ";
        std::cin>>alumno[cont].edad;
        std::cout<<"\nDime tu email: ";
        std::cin>>alumno[cont].email;
        }
        std::cout<<"LISTA DE LA CLASE";
    for(cont=0;cont<3;cont++){
        std::cout<<"\nHola alumno "<<cont+1<<" te llamas "<<alumno[cont].nombre;
        std::cout<<"\nTienes "<<alumno[cont].edad<<" anos";
        std::cout<<"\nTu email es "<<alumno[cont].email;
        }
    std::cin>>salir;
}
