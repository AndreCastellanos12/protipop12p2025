#include "alumnos.h"

alumnos::alumnos()
{

    do
    {
        promedioFacultad_1 = 0;
        promedioFacultad_2 = 0;
        promedioFacultad_3 = 0;

        cout << "\n*** Comparativo de Facultades ***\n" << endl;

        // Facultad 1
        InicializarMatriz(matrizFacultad_1);
        LlenarMatriz(matrizFacultad_1);
        cout << "\n📚 FACULTAD 1:\n";
        promedioFacultad_1 = imprimirMatriz(matrizFacultad_1);

        cout << "\nPresione Enter para continuar con la siguiente facultad...";
        cin.ignore();
        cin.get();

        // Facultad 2
        InicializarMatriz(matrizFacultad_2);
        LlenarMatriz(matrizFacultad_2);
        cout << "\n📚 FACULTAD 2:\n";
        promedioFacultad_2 = imprimirMatriz(matrizFacultad_2);

        cout << "\nPresione Enter para continuar con la siguiente facultad...";
        cin.ignore();
        cin.get();

        // Facultad 3
        InicializarMatriz(matrizFacultad_3);
        LlenarMatriz(matrizFacultad_3);
        cout << "\n📚 FACULTAD 3:\n";
        promedioFacultad_3 = imprimirMatriz(matrizFacultad_3);

        // Preguntar si desea repetir el proceso
        cout << "\n¿Desea repetir el proceso? (s/n): ";
        cin >> opcion;
        if (opcion != 's' && opcion != 'S')
            repetir = false;

    } while (repetir);
}

void InicializarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1])
{
    // Función que permite inicializar la matriz de cálculos
    for(int i = 0; i < NUMEROALUMNOS; i++)
    {
        for(int j = 0; j < NUMERONOTAS+1; j++) // Se incluye la columna del promedio
        {
            matriz[i][j] = 0.00;
        }
    }
}

void LlenarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1])
{
    // Función que permite calcular aleatoriamente las notas de cada alumno en la matriz
    for(int i = 0; i < NUMEROALUMNOS; i++)
    {
        float suma = 0;
        for(int j = 0; j < NUMERONOTAS; j++)
        {
            int calificacionAlumno = 0;
            if (j == 0 || j == 3) // Primer parcial y actividades
            {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 20);
            }
            else if (j == 1) // Segundo parcial
            {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 25);
            }
            else if (j == 2) // Examen final
            {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 35);
            }

            suma += calificacionAlumno;
            matriz[i][j] = calificacionAlumno;
        }
        matriz[i][NUMERONOTAS] = suma; // Guardar el total de notas
    }
}

float imprimirMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1])
{
    cout << "\n(nota1) Primer Parcial | (nota2) Segundo Parcial | (nota3) Examen Final | (nota4) Actividades" << endl;
    cout << setw(10) << "Alumno";

    for (int x = 1; x <= NUMEROALUMNOS; x++)
    {
        cout << setw(10) << "Alumno " << x;
    }
    cout << endl;

    float totalGeneral = 0;
    for (int i = 0; i < NUMEROALUMNOS; i++)
    {
        cout << setw(10) << "Alumno " << i + 1;
        float suma = 0;
        for (int j = 0; j < NUMERONOTAS+1; j++)
        {
            cout << setw(10) << matriz[i][j];
            suma += matriz[i][j];
        }
        totalGeneral += suma;
        cout << endl;
    }

    float promedioGeneral = totalGeneral / NUMEROALUMNOS;
    cout << "\n Promedio general: " << promedioGeneral << endl;
    return promedioGeneral;
}

int busquedaAleatoriaDeNotas(int minimo, int maximo)
{
    return minimo + rand() % (maximo - minimo + 1);
}
}

alumnos::~alumnos()
{
    //dtor
}
