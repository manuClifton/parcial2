#include "menu.h"


int menu(void)
{
    int option;

        system("cls");
        printf("***MENU***\n\n");
        printf("1. Cargar los datos de los empleados desde el archivo datos.csv (modo texto)\n");
        printf("2. Mostrar los datos\n");
        printf("3. Salir\n");
        printf("Ingrese opcion: ");
        fflush(stdin);
        scanf("%d",&option);

    return option;
}

