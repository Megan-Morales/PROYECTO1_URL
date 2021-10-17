#pragma once
#include <string>

using std::string;

class Canciones
{
	string name;
	string artist;

public:
	Canciones(string name, string artist);
	Canciones getCancion();
	string getName();
	string getArtist();



};

