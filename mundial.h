#ifndef RUTA_MUNDIAL_H
#define RUTA_MUNDIAL_H
#include <string>
#include "nodo.h"

using namespace std;
typedef int Dato;

class ListaMundial{ 

    private:
    Nodo* ultimo;

    public:

    ListaMundial();

    void alta(Equipo elemento);

    Equipo baja();

    bool vacia();

    Equipo consulta();

    ~ListaMundial();

};

#endif //RUTA_MUNDIAL_H