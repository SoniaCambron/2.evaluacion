#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char salir;
    int cont;
    struct Amigo{
           int n_amigo;
           float dinero;
    };
    Amigo misAmigos[3];
    for(cont=0;cont<4;cont++){
       std::cout<<"Dime tu numero "<<cont<<" : ";
       std::cin>>misAmigos[cont].n_amigo;
       std::cout<<"Dime cuanto dinero tienes: ";
       std::cin>>misAmigos[cont].dinero;
    //Recupero los datos de mi amigo pepito
       std::cout<<"Es mi amigo numero "<<misAmigos[cont].n_amigo;
       std::cout<<'\n';
       std::cout<<"Y tiene "<<misAmigos[cont].dinero<<" euros";
       std::cout<<'\n';
}
    
    
    std::cin>>salir;
}
