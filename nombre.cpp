#include<iostream>
//Vamos a hacer un programa que lea una palabra y me devuelva la inicial
int main(){
    char salir;
    char palabra[10];
    int cont;
    int longitud;
    longitud=0;
    //int longitud=0; igual
    std::cout<<"Dime tu nombre: ";
    std::cin>>palabra;
    std::cout<<"\nTe llamas ";
    std::cout<<palabra;
    std::cout<<"\n";
    for(cont=0;cont<=9;cont++){
                               std::cout<<palabra;
                               }
                       //Contamos cuantas letras tiene el nombre
    for(cont=0;cont<=9;cont++){
       
                       if (palabra[cont]!='\0'){
                                                longitud=longitud+1;
                                                }
                       }

       std::cout<<"El nombre de ";
       std::cout<<palabra;
       std::cout<<" tiene ";
       std::cout<<longitud;
       std::cout<<" letras.";
       std::cin>>salir;
       }
