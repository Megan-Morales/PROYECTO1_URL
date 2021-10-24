#pragma once
#include "Ordenamiento1.h"
#include "Canciones.h"
#include <string>

using std::string;


class OrdenarPorNombre :
    public Ordenamiento1<Canciones>
{
public:
 
    virtual int compare(Canciones a, Canciones b) {
        return a.getName().compare(b.getName());
    }
};

