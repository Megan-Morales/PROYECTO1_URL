#pragma once
#include "Ordenamiento1.h"
#include "Canciones.h"
#include <string>

using std::string;


class OrdenarPorArtista:
    public Ordenamiento1<Canciones>
{
public:

    virtual int compare(Canciones a, Canciones b) {
        if (a.getArtist() == "Desconocido") {
            return 1;
        }
        
        return a.getArtist().compare(b.getArtist());
    }

};

