#ifndef RUTA_FASE_H
#define RUTA_FASE_H
#include <string>
#include <vector>
#include "Partido.h"
using namespace std;

class Fase {

    private:
    vector <Partidos> vector_partidos;
    int cantidad_partidos;

    public:
    //constructor
    Fase();
    void alta_partido(Partidos partido);
    void baja_partido();
    void modificar_partido();
    void calcular_puntaje();
};

#endif //RUTA_FASE_H

