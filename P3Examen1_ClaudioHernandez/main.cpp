#include <iostream>
#include "HTHPlus.h"
#include <string>
#include "pelicula.h"
using std::string;
using std::cin;
using std::cout;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int menu();
int main(int argc, char** argv) {
	HTHPlus* clase =  new HTHPlus();
	int opcion2;
	while(opcion2!=8) {
		switch(opcion2= menu()) {
			case 1: {
				cout<<"Ingrese el titulo de la pelicula:";
				string nombre;
				cin>>nombre;
				cout<<"Ingrese el genero de la pelicula:";
				string genero;
				cin>>genero;
				cout<<"Ingrese el director de la pelicula:";
				string director;
				cin>>director;
				pelicula* peliculaNueva =new pelicula(director,genero,nombre);
				clase->agregarp(peliculaNueva);
				break;
			}
			case 2: {
				clase->imprimirPeliculas();
				cout<<"\nIngrese el numero  de la pelicula a eliminar:";
				int pos ;
				cin>>pos;
				clase->eliminarPelicula(pos);
				cout<<"\n================================\n";
				cout<<"Eliminado, Verifique la lista :";
				clase->imprimirPeliculas();


				break;
			}
			case 3: {
				clase->imprimirPeliculas();
				cout<<"\nIngrese el numero de la pelicula a modificar:";
				int pos ;
				cin>>pos;
				clase->modificarPeliculas(pos); 
				break;
			}
			case 4: {
				
				clase->buscarpeliculal();
				break;
			}
			case 5: {
				clase->porgenero(); 
				break;
			}
			case 6: {
				clase->ordenarPeliculas(); 
				break;
			}
			case 7:{
				clase->imprimirPeliculas();
				break;
			}

		}
	}
	delete clase;
	return 0;

}
int menu() {
	int opcion=0;


	while(opcion!=8) {
		cout<<"\n=============MENU==========\n1.Agregar Pelicula\n2.Eliminar Pelicula\n3.modificar pelicula\n4.Buscar pelicula\n5.Imprimir peliculas por genero\n6.Imprimir por valor\n7.Listar\n8.Salir\nOpcion:";
		cin>>opcion;
		if(opcion<=7&&opcion>=1) {
			//return opcion;
			break;
		}

	}
	return opcion;


}