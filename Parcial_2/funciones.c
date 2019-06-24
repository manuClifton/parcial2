#include "LinkedList.h"
#include "motos.h"

int cargarDatos(LinkedList* eDominio)
{
    FILE* pFile;
    int result=0;
    char buffer[4][30];
    int cant;
    eDominio* moto;

    if( eDominio != NULL){
        pFile= fopen(path,"r");
        if(pFile==NULL)
        {
            result=0;
        }
        else
        {
          if(eDominio != NULL){
        while(!feof(pFile)){
            cant = fscanf(pFile,"%[^,],%[^,],%[^\n],\n", buffer[0], buffer[1], buffer[2], buffer[3]);
            moto = newParametros(buffer[0],buffer[1],buffer[2],buffer[3]);
            if(moto != NULL){
                ll_add(eDominio,moto );
                result = 1;
            }
            if(cant < 4){
                if(feof(pFile)){
                    break;
                }else{
                    result = 0;
                    break;
                }
            }
        }
    }
        }
    }
    fclose(pFile);

    return result;
}

