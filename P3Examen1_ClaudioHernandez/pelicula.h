#ifndef PELICULA_H
#define PELICULA_H
#include <string>

using std::string;
class pelicula
{
	private:
		string titulo;
		string director;
		string genero;
		int valor;
		
	public:
		pelicula();
		pelicula(string,string,string);
		void setTitulo(string);
		void setDirector(string);
		void setGenero(string);
		void setValor(int);
		string getTitulo();
		string getGenero();
		int getValor();
		string toStringb();
		string toStringGenero();
		string getDirector();
		
		~pelicula();
	protected:
};

#endif