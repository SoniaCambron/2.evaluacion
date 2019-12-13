#include<iostream>
//Vamos a hacer el ejercicio 1.
int main(){
    char salir;
    int num[4];
    int cont;
    int multiplicacion;
    multiplicacion=1;
    for(cont=0;cont<=3;cont++){
                               std::cout<<"Dime un numero";
                               std::cin>>num[cont];
                               std::cout<<"\n";
                               while(num[4]=0){
                                               std::cout<<"No se puede";
                                               std::cout<<"Dime otro numero";
                                               std::cin>>num[cont];
                                               }
                               }
    for(cont=0;cont<=3;cont++){
                               multiplicacion=multiplicacion*num[cont];
                               }
    std::cout<<multiplicacion;
    std::cout<<"\n";
                               
    std::cin>>salir;
}
                               
