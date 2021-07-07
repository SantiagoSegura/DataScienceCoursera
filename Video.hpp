#ifndef VIDEO_H
#define VIDEO_H
#include <string>
#include <iostream>
// La clase Video es la clase padre (base)

using namespace std;

class Video
{
	protected:
		int calificacion;		
		int anioLanzamiento;
		int duracion;
		string tipoVideo;
		string nombreVideo;
		string genero;
		
	public:
		Video();
		Video(int, int, int, string, string, string);
		
		void setCalificacion(int _calificacion);
        void setAnioLanzamiento(int _anioLanzamiento);
        void setDuracion(int _duracion);
		void setTipoVideo(string _tipoVideo);
		void setNombreVideo(string _nombreVideo);
		void setGenero(string _genero);
		
		//getters
		int getCalificacion(){return calificacion;}	
		int getAnioLanzamiento(){return anioLanzamiento;}	
		int getDuracion(){return duracion;}	
		string getTipoVideo(){return tipoVideo;}	
		string getNombreVideo(){return nombreVideo;}	
		string getGenero(){return genero;}	
		
		
		virtual void calificaVideo();
		
		virtual void muestraDatos();
	
};

//constructores de Video
Video::Video(){}


Video::Video(int _calificacion, int _anioLanzamiento, int _duracion, string _tipoVideo, string _nombreVideo, string _genero){
	calificacion = _calificacion;
	anioLanzamiento = _anioLanzamiento;
	duracion = _duracion;
	tipoVideo = _tipoVideo;
	nombreVideo = _nombreVideo;
	genero = _genero;
	
}
//setters

void Video::setCalificacion(int _calificacion){
	calificacion = _calificacion;
}
void Video::setAnioLanzamiento(int _anioLanzamiento){
	anioLanzamiento = _anioLanzamiento;
}
void Video::setDuracion(int _duracion){
	duracion = _duracion;
}
void Video::setTipoVideo(string _tipoVideo){
	tipoVideo = _tipoVideo;
}
void Video::setNombreVideo(string _nombreVideo){
	nombreVideo = _nombreVideo;
}
void Video::setGenero(string _genero){
	genero = _genero;
}

void Video::calificaVideo(){
	
	cout <<"***** Ingresa la calificacion del video (1 - 5): "<<endl;
}



void Video::muestraDatos(){
	
	cout<<"***** Nombre: "<<getNombreVideo()<<endl;
	cout<<"***** Anio de lanzamiento: "<<getAnioLanzamiento()<<endl;
	cout<<"***** Duracion: "<<getDuracion()<<" min"<<endl;
	cout<<"***** Tipo de video: "<<getTipoVideo()<<endl;
	cout<<"***** Genero: "<<getGenero()<<endl;
	cout<<"***** Calificacion: " << getCalificacion() <<endl;
}

#endif
