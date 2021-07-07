#ifndef SERIE_H
#define SERIE_H
#include "Video.hpp"
#include <string>
#include <iostream>

using namespace std;

class Serie : public Video{
	protected:
		int Capitulos;
		int Temporadas;
		
	public:
		Serie();
		Serie(int, int, int, string, string, string, int, int);
		
		void setCapitulos(int _Capitulos);
		void setTemporadas(int _Temporadas);
		
		int getCapitulos(){return Capitulos;}
		int getTemporadas(){return Temporadas;}
		
		void calificaVideo();
		void muestraDatos();
	
};

//Constructores
Serie::Serie(){}
Serie::Serie(int _calificacion, int _anioLanzamiento, int _duracion, string _tipoVideo, string _nombreVideo, string _genero, int _Capitulos, int _Temporadas) : Video(_calificacion, _anioLanzamiento, _duracion, _tipoVideo, _nombreVideo, _genero){
	Capitulos = _Capitulos;
	Temporadas = _Temporadas;
}

//Setters

void Serie::setCapitulos(int _Capitulos){
	Capitulos = _Capitulos;
}
void Serie::setTemporadas(int _Temporadas){
	Temporadas = _Temporadas;
}




void Serie::calificaVideo(){
	Video::calificaVideo();
}

void Serie::muestraDatos(){
	Video::muestraDatos();
	cout<<"***** Capitulos: " << getCapitulos() <<endl;
	cout<<"***** Temporadas: " << getTemporadas() <<endl;
	
}
#endif
