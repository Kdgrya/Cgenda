#pragma once
#include "contacto.h"

typedef struct agenda
{
    contactos* lista;
    contactos* tamano;
    int cantidad;
    int ultima_posicion;
}agenda;



int main();
void inicializar(agenda* ag);
void mostrar(const agenda* ag);
void agregar(agenda* ag);
void liberar(agenda* ag);
