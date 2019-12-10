#include<iostream>
//Vamos a hacer un programa que nos pida 4 numeros y los guarde para calcular la media.
int main(){
    char salir;
    int num[4];
    int cont;
    float suma_numeros;
    float media;
    //Introducimos los numeros en el vector
    for(cont=0;cont<=3;cont++){
          std::cout<<"Dime el numero ",cont,": ";
          std::cin>>num[cont];
          }
    std::cout<<"Has metido los siguientes numeros\n";
    for(cont=0;cont<=3;cont++){
                               std::cout<<num[cont];
                               std::cout<<"\n";
                               }
    //Calculamos la media
    std::cout<<"Media\n";
    suma_numeros=0;
    for(cont=0;cont<=3;cont++){
                               suma_numeros=suma_numeros+num[cont];//Suma acumulada
                               }
    std::cout<<"La suma vale: ";
    std::cout<<suma_numeros;
    std::cout<<"\n";
    media=suma_numeros/4; //o media=suma_numeros/4.0 y con int media y int suma_numeros
    std::cout<<"La media vale: ";
    std::cout<<media;
    std::cout<<"\n";
    //Mostramos la lista al reves
    for(cont=3;cont>=0;cont--){   //\cont--=cont-1
                               std::cout<<num[cont];
                               std::cout<<"\n";
                               }
    std::cin>>salir;
    
}
