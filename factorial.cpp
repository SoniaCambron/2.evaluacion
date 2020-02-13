#include<iostream>
int main(){
	;int numero,cont,multiplicacion,salir;
	std::cout<<"Dime un numero: ";
	std::cin>>numero;
	multiplicacion=1;
	for(cont=1;cont<=numero;cont++){
		multiplicacion=multiplicacion*cont;
	}
    std::cout<<multiplicacion;
    std::cin>>salir;
}
