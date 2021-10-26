#pragma once //Clase hija, para ordenar por artista
#include "Ordenamiento1.h"
#include "Canciones.h"
#include <string>

using std::string;


class OrdenarPorArtista:
    public Ordenamiento1<Canciones>
{
public:

    virtual int compare(Canciones a, Canciones b) {
        if (a.getArtist() == "Desconocido") { //Si no hay artista, colocar desconocido
            return 1; //Devuelve uno para que al momento de entrar al método compare vaya de último
        }
        return a.getArtist().compare(b.getArtist());
    }
};

