#include<iostream>
#include<sonis_func.h>


    
int main(){
    char palabra[10],salir;
    
    std::cout<<"Dime una palabra: ";
    std::cin>>palabra;
    cambia_mayus_minus(palabra);
    std::cout<<palabra;
    std::cin>>salir;
}
    
