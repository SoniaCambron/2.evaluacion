//Vamos a hacer un programa que lea una palabra y lea las vocales.
#include<iostream>

int devuelve_longitud(char palabra[]){
    int longitud=0;//Variable acumuladora
    int cont=0;
    while(palabra[cont]!='\0'){
                               longitud++;
                               cont++;
                               }
    return(longitud);
    }
int main(){
    char palabra[10];
    char vocales[]={'a','e','i','o','u'};
    int nvocales,cont;
    char salir;
    std::cout<<"Dime una palabra: ";
    std::cin>> palabra;
    for(cont=0;cont<devuelve_longitud(palabra);cont++){
                                                       for(nvocales=0;nvocales<5;nvocales++){
                                                                                             if(palabra[cont]==vocales[nvocales]){
                                                                                                                                  palabra[cont]='u';
                                                                                                                                  }
                                                                                             }
                                                       //if(palabra[cont]=='a'||if(palabra[cont]=='e'||if(palabra[cont]=='i'||if(palabra[cont]=='o'||if(palabra[cont]=='u')
                               }
    std::cout<<"\n";
    std::cout<<"Palabra troleada: " <<palabra;
    std::cout<<"\n";
    std::cout<< nvocales;
    
    std::cin>>salir;
    }
