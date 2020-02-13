#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int cont;
	struct Familia{
		char nombre[20];
		int edad;
		char familiar[20];
	};
	Familia familia[3];
	for(cont=0;cont<3;cont++){
		std::cout<<"\nTu eres mi familiar "<<cont+1;
		std::cout<<"\nComo te llamas?";
		std::cin>>familia[cont].nombre;
		std::cout<<"\nCuantos anos tienes?";
		std::cin>>familia[cont].edad;
		std::cout<<"\nQuien eres para Sonia?";
		std::cin>>familia[cont].familiar;
	}
	std::cout<<"\n______________Mi familia______________";
	for(cont=0;cont<3;cont++){
		std::cout<<"\nQuerido familiar "<<cont+1;
		std::cout<<"\nTe llamas "<<familia[cont].nombre;
		std::cout<<'\n'<<familia[cont].nombre<<" tiene "<<familia[cont].edad;
		std::cout<<"\nQue suerte que tienes eres su "<<familia[cont].familiar;
	}
}
