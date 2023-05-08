#include "fase.h"
#include "Partido.h"

    Fase::Fase(){
        vector_partidos;
        cantidad_partidos = 0;
    }

    void Fase::alta_partido(Partidos partido){
        vector_partidos[cantidad_partidos] = partido;
        cantidad_partidos++;
    }

    void   Fase::baja_partido(){

    }

    void   Fase::calcular_puntaje(){

    }
