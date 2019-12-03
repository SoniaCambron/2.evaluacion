#include<iostream>
//Vamos a hacer un bello programa que dibuje un cuadrado con asteriscos del tamaño que nos diga el usuario
int main(){
    char salir;
    int lado;
    int col;
    int filas;
    std::cout<<"De que tamano quieres el cuadrado: ";
    std::cin>> lado;
    for(col=1;col<=lado;col++){
      for(filas=1;filas<=lado;filas++){
       std::cout<<'*';
       std::cout<<' ';
      }                                                          
      std::cout<<"\n";
    }
    std::cin>> salir;
}
