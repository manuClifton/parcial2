#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "menu.h"
#include "funciones.h"
#include "motos.h"





int main()
{
    int exit = 0;
    int devolucion;

    int flagLoadLinkedList=0;

    LinkedList* eDominio = ll_newLinkedList();

    do{
        switch(menu())
        {
        case 1:
            // cargar
            if(flagLoadLinkedList == 0){
                    devolution=cargarDatos("datos.csv", eDominio);
                    if(devolution==1)
                    {
                        printf("\n   **********************\n");
                        printf("   * Cargo Exitosamente *\n");
                        printf("   **********************\n\n");
                        flagLoadLinkedList=1;
                    }
                    else if (devolution==0)
                    {
                        printf("\n   *******************\n");
                        printf("   * Error al cargar *\n");
                        printf("   *******************\n\n");
                    }
                }else{
                    printf("\n   *********************\n");
                    printf("   * Ya estan cargados *\n");
                    printf("   *********************\n\n");
                }

                system("pause");
            break;
        case 2:
            //mostrar
            break;
        case 3:

            break;
        }

    }while(exit== 0);

    return 0;
}
