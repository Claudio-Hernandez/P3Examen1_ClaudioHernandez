#include "pelicula.h"
//#include <ctime>
#include <iostream>
#include <string>
 #include<stdlib.h>
  #include<time.h>
using std::cout;
using std::string;
using namespace std;
pelicula::pelicula()
{
	
}
pelicula::pelicula(string director2,string genero2,string titulo2)
{
	srand(time(NULL));
	//int valor3;
	this->valor = rand()%(5-1+1)+1;
	
	//valor =  valor3;
	//cout<<valor;
	director = director2;
	genero =  genero2;
	titulo = titulo2;
	
	
}
void pelicula::setTitulo(string titu)
{
	titulo =  titu;
}
string pelicula::getTitulo()
{
	return titulo;
}
void pelicula::setDirector(string director3)
{
	director =  director3;
	
}
void pelicula::setGenero(string genero2)
{
	genero =  genero2;
}
void pelicula::setValor(int n)
{
 valor = n;
}
int pelicula::getValor()
{
	return valor;
}
string pelicula::getDirector()
{
	return director;
}
string pelicula::getGenero()
{
	return genero;
}
string pelicula::toStringb()
{
	string cadena = " ";
	
	string valoracion =to_string(valor);
	cadena = "   \nGenero:" + genero+"\n   Titulo:"+titulo+"\n   Director:"+director+"\n   valoracion:"+valoracion+"/5";
	return cadena;
}
string pelicula::toStringGenero()
{
	string cadena = " ";
	
	string valoracion =to_string(valor);
	cadena = "\n   Titulo:"+titulo+"\n   Director:"+director+"\n   valoracion:"+valoracion+"/5";
	return cadena;
}

pelicula::~pelicula()
{
	
}