#ifndef RUTA_MUNDIAL_H
#define RUTA_MUNDIAL_H
#include <string>
#include<string>
#include <stdlib.h>
#include "nodo.h"

using namespace std;

class ListaMundial{ 

    protected:
    Nodo* primero;
    int cantidad;

    public:

    ListaMundial();

    void alta(Equipo elemento);

    void alta(Equipo elemento,int posicion);

    Equipo baja();

    Equipo baja(int posicion);

    bool vacia();

    Equipo consulta(Equipo equipoP);

    void cargar_lista();

    int obtener_cantidad();

    void procesar_csv();

    ~ListaMundial();

    private:

    Nodo* obtener_nodo(int posicion);

};

void cargar_lista(ListaMundial lst);

#endif //RUTA_MUNDIAL_H