#ifndef HTHPLUS_H
#define HTHPLUS_H
#include <vector>
#include "pelicula.h"
//#include <string>
//using std::string;
using std::vector;
class HTHPlus
{
	private:
		vector<pelicula*> peliculas;
	public:
		HTHPlus();
		void agregarp(pelicula*);
		void eliminarPelicula(int);
		void modificarPeliculas(int);
		void imprimirPeliculas();
		void porgenero();
		void buscarpeliculal();
		void ordenarPeliculas();
		~HTHPlus();
	protected:
};

#endif