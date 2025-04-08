#include <iostream>
#include "alumnos.h"

using namespace std;

int main()
{
    LlamarCiclo();
    return 0;
}

void LlamarCiclo()
{
    float matrizFacultad_1[NUMEROALUMNOS][NUMERONOTAS+1];
    float matrizFacultad_2[NUMEROALUMNOS][NUMERONOTAS+1];
    float matrizFacultad_3[NUMEROALUMNOS][NUMERONOTAS+1];

    char opcion;
    bool repetir = true;

    float promedioFacultad_1;
    float promedioFacultad_2;
    float promedioFacultad_3;
