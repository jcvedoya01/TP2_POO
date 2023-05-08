#include <iostream>
#include <fstream>
#include<string>
#include <stdlib.h>
#include "mundial.h"
#include "equipo.h"

#define FASE_GRUPOS "grupos"
#define FASE_OCTAVOS "octavos"
#define FASE_CUARTOS "cuartos"
#define FASE_SEMIFINAL "semis"
#define FASE_FINAL "final"
#define FASE_TERCERO "tercer puesto"

using namespace std;

ListaMundial::ListaMundial(){
    primero = 0;
    cantidad = 0;
} 

void ListaMundial::alta(Equipo elemento,int pos){
    Nodo *aux = new Nodo(elemento);
    if (pos == 1){
        aux ->cambiar_siguiente(primero);
        primero = aux;
    }
    else{
        Nodo* ant = obtener_nodo(pos-1);
        aux ->cambiar_siguiente(ant->obtener_siguiente());
        ant ->cambiar_siguiente(aux);
    }
    
    cantidad++;
}

Equipo ListaMundial::baja(int pos) {
    Nodo *aux = obtener_nodo(pos);
    Equipo datoBaja = aux->obtener_elemento();
    if (pos == 1){
        primero = aux->obtener_siguiente();
    }
    else{
        Nodo* ant = obtener_nodo(pos-1);
        ant->cambiar_siguiente(aux->obtener_siguiente());
    } 
    delete aux; 
    cantidad--;
    return datoBaja;
}

bool ListaMundial::vacia(){
    return (primero == 0);
}

int ListaMundial :: obtener_cantidad(){
    return cantidad;
}

Equipo ListaMundial::consulta(Equipo equipoP ){
    return (primero->obtener_elemento()); 
}

ListaMundial::~ListaMundial(){
    while(!vacia()){
        baja();
    }
}

Nodo* ListaMundial::obtener_nodo(int pos){
    Nodo* aux = primero;
    for (int i = 1; 1 < pos ; i++){
        aux -> obtener_siguiente();
    }
    return aux;
}


void procesar_csv(ListaMundial lst){
    fstream archivo_clasificacion ("resultados.csv");

    char separador = 44;
    char espacio = 10;

    if (archivo_clasificacion.fail()){
        cout << "no se pudo abrir el archivo";  // por si el archivo no se puede abrir correctamente
        exit(1);
    }
    string linea;

    getline(archivo_clasificacion,linea);

    do{

        ///FASE DE GRUPOS///
        while ((linea!=FASE_TERCERO)&&(linea != FASE_OCTAVOS)&&(linea!=FASE_CUARTOS)&&(linea!=FASE_SEMIFINAL)&&(linea!=FASE_FINAL)&&(linea!="")){
            
            if ((linea==FASE_GRUPOS)or(linea=="")){
                getline(archivo_clasificacion,linea);
            }
            
            string auxPais1;
            string auxPais2;
            string auxGoles1;
            string auxGoles2;

            getline (archivo_clasificacion,auxPais1,separador );
            getline (archivo_clasificacion,auxPais2,separador );
            getline (archivo_clasificacion,auxGoles1,separador );
            getline (archivo_clasificacion,auxGoles2,espacio );

            Partidos auxPartido(auxPais1,auxPais2,stoi(auxGoles1),stoi(auxGoles2));
            
            int i = 0;
            Nodo* aux = obtener_nodo(i);

            while(auxPais1 != aux->obtener_pais()){
                i++;
                Nodo* aux = obtener_nodo(i);
            }
            aux->equipo.

            
            
            
            
      }      
    }while(!archivo_clasificacion.eof())

}


 /////////////////////////////////////////////////////


void cargar_lista(ListaMundial lst){
        
    char separador =32;

    fstream archivo_mundial ("equipos.txt");

    if (archivo_mundial.fail()){
        cout << "no se pudo abrir el archivo";  // por si el archivo no se puede abrir correctamente
        exit(1);
    } 

    string nombre,grupo;
    int i;
    do{
        getline (archivo_mundial,nombre,separador );
        getline (archivo_mundial,grupo);

        Equipo equipoAuxiliar(nombre,grupo);

        lst.alta(equipoAuxiliar);
        cout<< "EL PAIS " << equipoAuxiliar.obtener_pais()<< " FUE AGREGADO"<<endl;
        
        }while (!archivo_mundial.eof());
    
}
