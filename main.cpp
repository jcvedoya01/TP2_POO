#include <iostream>
#include <fstream>
#include<string>
#include <stdlib.h>

#include "mundial.h"
using namespace std;


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


int main (){
    ListaMundial Lst;
    cargar_lista(Lst);

    while(!Lst.vacia()){
        Lst.baja();
    }
    

    return 0;
}