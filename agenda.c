#include <stdio.h>
#include <stdlib.h>
#include "Agenda.h"
#include "Contacto.h"


void inicializar(agenda* ag)
{
    ag->lista = NULL;
    ag->cantidad = 0;
}

void mostrar(const agenda* ag) {
    if (ag->cantidad == 0 || ag->lista == NULL) {
        printf("\nNo hay contactos para mostrar.\n");
        return;
    }

    printf("\n==== Contactos ==== \n");
    printf("id || nombre || apellido || telefono \n");
    for (int i = 0; i < ag->cantidad; i++) {
        printf
        (   "%d. %s %s - Tel: %s\n", 
               i + 1, 
               ag->lista[i].Nombre, 
               ag->lista[i].Apellido, 
               ag->lista[i].Telefono
        );
    }
}

void agregar(agenda* ag)
{

    contactos* temp = (contactos *)malloc(sizeof (contactos*)  * 5);

    if (temp == NULL)
    {
        printf("Fallo a la asignacion de memoria");
        return;
    }

    ag->lista = ag->tamano;
    
    contactos* cont = &ag->lista[ag->cantidad];
    
    printf("ingrese el Nombre \n");
    scanf("%20s",cont->Nombre);
    printf("ingrese el Apellido \n");
    scanf("%20s",cont->Apellido);
    printf("ingrese el Numero de Telefono \n");
    scanf("%12s",cont->Telefono);
    printf(" contacto agregado correctamente\n");

    ag->cantidad++;
    ag->ultima_posicion = ag->cantidad-1;
}

void liberar(agenda* ag)
{
    contactos* cont;

    if(ag->lista != NULL)
    {
        free(ag->lista);
        free(cont);
        cont = NULL;
        ag->lista = NULL;
    }

}
