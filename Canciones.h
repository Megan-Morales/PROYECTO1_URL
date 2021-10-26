#pragma once
#include <string>

using std::string;
//Clase canción
//Se definen los atributos y métodos


class Canciones
{
	string name;
	string artist;

public:
	//Método construcctor
	Canciones(string name, string artist);
	
	
	string getName();
	string getArtist();

};

