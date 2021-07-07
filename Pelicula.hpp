#ifndef PELICULA_H
#define PELICULA_H
#include "Video.hpp"
#include <string>
#include <iostream>

using namespace std;

class Pelicula : public Video{
	protected:
		int ID;
		
	public:
		Pelicula();
		Pelicula(int, int, int, string, string, string, int);
		
		void setID(int _ID);
		
		int getID(){return ID;}
		
		void calificaVideo();
		void muestraDatos();
	
};

//Constructores de Pelicula
Pelicula::Pelicula(){}
Pelicula::Pelicula(int _calificacion, int _anioLanzamiento, int _duracion, string _tipoVideo, string _nombreVideo, string _genero, int _ID) : Video(_calificacion, _anioLanzamiento, _duracion, _tipoVideo, _nombreVideo, _genero){
	ID = _ID;
}


//setters

void Pelicula::setID(int _ID){
	ID = _ID;
}

void Pelicula::calificaVideo(){
	Video::calificaVideo();
}

void Pelicula::muestraDatos(){
	Video::muestraDatos();
	cout<<"***** ID: " << getID() <<endl;
	
}
#endif
