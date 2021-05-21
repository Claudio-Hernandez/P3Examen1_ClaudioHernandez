#include "HTHPlus.h"
#include <vector>
#include "pelicula.h"
#include <iostream>
#include <string>
#include<cstring>
using std::cout;
using namespace std;
using std::string;
using std::cin;
using std::vector;
HTHPlus::HTHPlus() {
}
void HTHPlus::agregarp(pelicula* peli) {
	peliculas.push_back(peli);
}
void HTHPlus::eliminarPelicula(int pos) {
	delete peliculas[pos];
	peliculas.erase(peliculas.begin()+pos);
}
void HTHPlus::imprimirPeliculas() {

	for(int i = 0; i<peliculas.size(); i++) {
		cout<<"\n=============================\n";
		cout<<i<<peliculas[i]->toStringb();
	}

}
void HTHPlus::modificarPeliculas(int pos) {
	cout<<"Ingrese lo que desea modificar:\n1.Titulo\n2.genero\n3.director\nOpcion:";
	int opcion;
	cin>>opcion;
	switch(opcion) {
		case 1: {
			cout<<"Ingrese nuevo titulo:";
			string tituloN ;
			cin>>tituloN;
			peliculas[pos]->setTitulo(tituloN);
			cout<<"Terminado! verifique:";
			imprimirPeliculas();
			break;
		}
		case 2: {
			cout<<"Ingrese nuevo genero:";
			string generoNuevo ;
			cin>>generoNuevo;
			peliculas[pos]->setGenero(generoNuevo);
			cout<<"Terminado! verifique:";
			imprimirPeliculas();
			break;
		}
		case 3: {
			cout<<"Ingrese nuevo director:";
			string directorn ;
			cin>>directorn;
			peliculas[pos]->setDirector(directorn);
			cout<<"Terminado! verifique:";
			imprimirPeliculas();
			break;
		}
		case 4: {
			cout<<"ingrese nueva valoracion:";
			int valoracionN;
			cin>>valoracionN;
			peliculas[pos]->setValor(valoracionN);
			cout<<"Terminado! verifique:";
			imprimirPeliculas();

			break;
		}

	}



}
void HTHPlus::porgenero() {
	string yaestuvo= "";
	for(int i = 0; i<peliculas.size(); i++) {

		if(peliculas[i]->getGenero()!=yaestuvo) {
			cout<<"\n"<<peliculas[i]->getGenero()<<":\n";
			string genero1 = peliculas[i]->getGenero();
			for(int j =0 ; j<peliculas.size(); j++) {
				if(peliculas[j]->getGenero()==genero1) {
					cout<<peliculas[j]->toStringGenero();
					cout<<"\n=============\n";
					yaestuvo = peliculas[j]->getGenero();

				}
			}

		}

	}

}
void HTHPlus::buscarpeliculal() {
	cout<<"Ingrese palabra clave para buscar:";

	string clave ;
	string palabra;
	cin>>clave;
	int subPeliculas;
	int i=0;
	int aux = 0;
	int numeroDeEncuentros=0;
	for(int j = 0 ; j<peliculas.size(); j++) {
		palabra = peliculas[j]->getTitulo();

		if(palabra.find(clave, i)!=string::npos) {
			cout<<"\n==============================\n";
			cout<<peliculas[j]->toStringb();
			continue;

		}
	}

}
void HTHPlus::ordenarPeliculas() {
	vector<int>  valoraciones;
	for(int i = 0; i<peliculas.size(); i++) {
		valoraciones.push_back(peliculas[i]->getValor());
	}
	int aux = 0;
	for(int i = 0;i<valoraciones.size();i++){
		for(int j =0 ;j<valoraciones.size();j++){
			if(valoraciones[j]<valoraciones[j+1])
        	{
          		aux=valoraciones[j];
          		valoraciones[j]=valoraciones[j+1];
          		valoraciones[j+1]=aux;
        	}
		}
	}
	for(int i = 0; i<valoraciones.size(); i++) {
		for(int j = 0;j<peliculas.size();j++){
			
			
			if(peliculas[j]->getValor()==valoraciones[i]){
				cout<<peliculas[j]->toStringb();
				cout<<"\n  ------------------\n";
			}
			
		}
	}
	
}

HTHPlus::~HTHPlus() {
	for(int i = 0; i<peliculas.size(); i++) {
		delete peliculas[i];
		peliculas.erase(peliculas.begin()+i);


	}
}