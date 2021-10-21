#pragma once
#include <string>

using std::string;

class Canciones
{
	string name;
	string artist;

public:
	Canciones(string name, string artist);
	
	string getName();
	string getArtist();

};

