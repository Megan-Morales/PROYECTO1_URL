#include "Canciones.h"

Canciones::Canciones(string name, string artist)
{
	this->name = name;
	this->artist = artist;
}

string Canciones::getName()
{
	return this->name;
}

string Canciones::getArtist()
{
	return this->artist;
}
