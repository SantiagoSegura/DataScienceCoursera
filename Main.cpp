#include <iostream>
#include <string>
#include <conio.h>
#include "Video.hpp"
#include "Pelicula.hpp"
#include "Serie.hpp"
/*Santiago Segura A01246578 Equipo 9*/
/*Andrea Garza A00832444 Equipo 9*/
/*Andres Vera A00831778*/
using namespace std;



int main(){
	

	int opc1, a,e,i,o,u;
	char opc2, opc3, opc4, opc5;
	//opc2 = getch();
	cout<<"***** Bienvenido a nuestro servicio de streaming ***** \n"<<endl;
	do{
	
	    Serie p1 = Serie(a, 2020, 120, "Serie", "Malcolm in the middle", "Ficcion", 30, 2);
	    Pelicula p2 = Pelicula(e, 2021, 100, "Pelicula", "Thor", "Ficcion", 1672839405);
	    Pelicula p3 = Pelicula(i, 2021, 200, "Pelicula", "Balck Wid", "Ficcion", 1672839405);
	    Serie p4 = Serie(o, 2020, 120, "Serie", "Los simpson", "Ficcion", 40, 2);
	    Serie p5 = Serie(u, 2020, 120, "Serie", "Loki", "Ficcion", 8, 1);
	    
	    
	    
	    cout<<"\t\t\t Menu"<<endl;
	    cout<<"\t\t (1) Calificar un video"<<endl;
	    cout<<"\t\t (2) Mostrar Datos"<<endl;
	    cout<<"\t\t (3) Salir del programa"<<endl;
	    cout<<"R: ";
	    cin>>opc1;
	    switch(opc1){
	    	case 1:
	    		cout<<"\t ******Lista de tipos de videos a calificar*****"<<endl;
	    		cout<<"---- (a) Peliculas"<<endl;
	    		cout<<"---- (b) Series"<<endl;
	    		cout<<"Escoja un video( a / b): ";
	    		cin>>opc2;
	    		switch(opc2){
	    			case'a':
	    				cout<<"\t ******Lista de Peliculas*****"<<endl;
	    				cout<<"---- (a) Thor"<<endl;
	    				cout<<"---- (b) Black Widow"<<endl;
	    				cin>>opc4;
						switch(opc4){
							case'a':
								p2.calificaVideo();
								cin>>e;
								cout<<"Este video fue calificado"<<endl;
								break;
							case'b':
								p3.calificaVideo();
								cin>>i;
								cout<<"Este video fue calificado"<<endl;
								break;
						}
	    			    break;	
	    			case'b':
	    				cout<<"\t ******Lista de Series*****"<<endl;
	    				cout<<"---- (a) Malcolm in the middle"<<endl;
	    				cout<<"---- (b) Los simpson"<<endl;
	    				cout<<"---- (c) Loki"<<endl;
	    				cin>>opc4;
						switch(opc4){
							case'a':
								p1.calificaVideo();
								cin>>a;
								cout<<"Este video fue calificado"<<endl;
								break;
							case'b':
								p4.calificaVideo();
								cin>>o;
								cout<<"Este video fue calificado"<<endl;
								break;
							case'c':
								p5.calificaVideo();
								cin>>u;
								cout<<"Este video fue calificado"<<endl;
						}
					    break;
			    }
	    		break;
	    	case 2:
	    		cout<<"\t ****** Datos *****"<<endl;
	    		cout<<"---- (a) Peliculas"<<endl;
	    		cout<<"---- (b) Series"<<endl;
	    		cout<<"Escoja un video( Pelicula / Serie): ";
	    		cin>>opc3;
	    		switch(opc3){
	    			case'a':
	    				cout<<"\t ******Lista de Peliculas*****"<<endl;
	    				cout<<"---- (a) Thor"<<endl;
	    				cout<<"---- (b) Black Widow"<<endl;
	    				cin>>opc5;
						switch(opc5){
							case'a':
								p2.muestraDatos();
								break;
							case'b':
								p3.muestraDatos();
								break;
						}	    				
	    			    break;	
	    			
	    			case'b':
	    				cout<<"\t ******Lista de Series*****"<<endl;
	    				cout<<"---- (a) Malcolm in the middle"<<endl;
	    				cout<<"---- (b) Los simpson"<<endl;
	    				cout<<"---- (c) Loki"<<endl;
	    				cin>>opc5;
						switch(opc5){
							case'a':
								p1.muestraDatos();
								break;
							case'b':
								p4.muestraDatos();
								break;
							case'c':
								p5.muestraDatos();
								break;
						}	    				
					    break;
			    }
	    		
	    		break;
	    	case 3:
	    		cout<<"***** Gracias por preferir nuestros servicios ***** \n"<<endl;
	    		return 0;
	    		break;
	    		
		}
	}
	while(opc1 != 3);
	system ("pause");
}
