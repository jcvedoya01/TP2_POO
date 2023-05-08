#include <iostream>
#include <fstream>
#include<string>
#include <stdlib.h>

using namespace std;

///pre: recibe una opcion dentro de las sugeridas
///post: realiza la tarea de la opcion elegida
void procesar_opcion(int);


///pre: -
///post: muestra las opciones 
void mostrar_menu();


///pre: recibe una opcion de tipo int
///post: devuelve si la opcion es valida
bool opcion_valida(int);