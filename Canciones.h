#pragma once
#include <string>

using std::string;
//Solo se definen los atributos y m�todos

class Canciones
{
	string name;
	string artist;

public:
	Canciones(string name, string artist);
	
	string getName();
	string getArtist();

};

