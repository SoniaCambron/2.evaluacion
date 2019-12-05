#include<iostream>
//Vamos a hacer un programa que nos pida 4 numeros y los guarde para calcular la media.
int main(){
    char salir;
    int num[4];
    int cont;
    //Introducimos los numeros en el vector
    for(cont=0;cont<=3;cont++){
          std::cout<<"Dime un numero ";cont;": ";
          std::cin>>num[cont];
          }
    std::cout<<"Has metido los siguientes numeros\n";
    for(cont=0;cont<=3;cont++){
                               std::cout<<num[cont];
                               std::cout<<"\n";
                               }
    std::cin>>salir;
}
//std::cout<<"Dime el numero 1: ";
//std::cin>>num1;
//std::cout<<"Dime el numero 2: ";
//std::cin>>num2;
//std::cout<<"Dime el numero 3: ";
//std::cin>>num3;
//std::cout<<"Dime el numero 4: ";
//std::cin>>num4;
//sustituyes por un for
