#ifndef RUTA_NODO_H
#define RUTA_NODO_H

#include "mundial.h"
#include "equipo.h"

using namespace std;

class Nodo : ListaMundial{
    protected:
    Equipo equipo;
    Nodo *siguiente;

    public:
    Nodo(Equipo equipo);

    Equipo obtener_elemento();

    string obtener_pais();

    Nodo* obtener_siguiente();
    
    void cambiar_siguiente(Nodo* puntero);

};

#endif //RUTA_NODO_H