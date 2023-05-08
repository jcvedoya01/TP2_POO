#include "procesoArchivo.h"

Partidos::Partidos(){

}

Partidos::Partidos(string e1, string e2, int gol1, int gol2){
    Equipo1 = e1;
    Equipo2 = e2;
    goles_equipo1 = gol1;
    goles_equipo2 = gol2;
}
