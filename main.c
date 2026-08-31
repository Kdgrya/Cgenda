#include <stdio.h>
#include <stdlib.h>
#include "agenda.h"

int main(void) {
    agenda ag;
    inicializar(&ag);

    int operacion = 0;

    do {
        printf("\n=== MENU ===\n");
        printf("1: Agregar un contacto\n");
        printf("2: Ver contactos\n");
        printf("3: Salir\n");
        printf("Seleccione una opcion: ");
        
        if (scanf("%d", &operacion) != 1) {
            while (getchar() != '\n');
            system("cls");
            continue;
        }

        switch (operacion) {
            case 1:
                agregar(&ag);
                break;
            case 2:
                mostrar(&ag);
                break;
            case 3:
                liberar(&ag);
                printf("\nSaliendo del programa...\n");
                break;
            default:
                printf("\nOpcion invalida. Intente de nuevo.\n");
                break;
        }
    } while (operacion != 3);

    return 0;
}
