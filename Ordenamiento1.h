#pragma once
#include "Canciones.h"
template <typename T>
//Clase base
class Ordenamiento1
{
	public: virtual int compare(T a, T b) = 0; //Clase para ordenar la playlist, el virtual int, es porque esta es la clase base de otras. 		  
};