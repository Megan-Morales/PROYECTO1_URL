#pragma once
#include <string>

using std::string;
//Clase canci�n
//Se definen los atributos y m�todos


class Canciones
{
	string name;
	string artist;

public:
	//M�todo construcctor
	Canciones(string name, string artist);
	
	
	string getName();
	string getArtist();

};

