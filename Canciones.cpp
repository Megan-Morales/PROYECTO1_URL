#include "Canciones.h"

//Método constructor, inicializar los atributos de la clase
//Al objeto canción le pertenecen dos atributos, nombre y canción 
Canciones::Canciones(string name, string artist)
{
	//this->name== hace referencia al atributo del objeto
	this->name = name;
	this->artist = artist;

}

string Canciones::getName()
{
	//Método para obtener el nombre del objeto
	return this->name;
}

string Canciones::getArtist()
{
	//Método para obtener el nombre del objeto
	return this->artist;
}
