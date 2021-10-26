#pragma once
#include "Ordenamiento1.h"
#include "Canciones.h"
#include <string>
using std::string; //clase hija para odernar por nombre

class OrdenarPorNombre :
    public Ordenamiento1<Canciones>
{
public:
    virtual int compare(Canciones a, Canciones b) {
        return a.getName().compare(b.getName()); //M�todo compare(); Compara por medio del c�digo ascii y devuelve -1 o 1.
    }
};

