#include "Canciones.h"

//M�todo constructor, inicializar los atributos de la clase
//Al objeto canci�n le pertenecen dos atributos, nombre y canci�n 
Canciones::Canciones(string name, string artist)
{
	//this->name== hace referencia al atributo del objeto
	this->name = name;
	this->artist = artist;

}

string Canciones::getName()
{
	//M�todo para obtener el nombre del objeto
	return this->name;
}

string Canciones::getArtist()
{
	//M�todo para obtener el nombre del objeto
	return this->artist;
}
