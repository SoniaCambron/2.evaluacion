#include<iostream>
#include<sonis_func.h>
//Ordena las palabras por el nº de consonantes
int main(){
    char *palabra[4];
    char vocales={'a','e','i','o','u'};
    int cont,nvocales,nconsonantes,aux[20],longitud;
    char *aux2;
    for(cont=0;cont<4;cont++){
        std::cout<<"Dime una la palabra";
        std::cin>>aux;
        std::cout<<"\n";
        longitud=devuelve_longitud[aux];
        palabra[cont]=(char *)malloc((longitud+1)*sizeof(char));
        strcpy(palabra[cont],aux);

        for(nvocales=0;nvocales<5;nvocales=0){
             if(palabra[cont]==vocales[nvocales]){
                 cont2++;
             }
             }
        nconsonantes(palabra[cont])=devuelve_longitud(palabra[cont])-vocales(palabra[cont]);
        if(nconsonantes(palabra[cont])>nconsonantes(palabra[cont+1])){
              aux2=palabra[cont];
              palabra[cont]=palabra[cont+1];
              palabra[cont+1]=aux2;
              }
        }
        std::cout<<"\nLISTA DE PALABRAS\n";
        for(cont=0;cont<4;cont++){
              printf("%s",palabra[cont]);
              std::cout<<"\n";
        }
       
    
    
}
