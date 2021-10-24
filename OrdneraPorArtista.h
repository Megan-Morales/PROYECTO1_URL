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
        return a.getArtist().compare(b.getArtist());
    }

};

