#ifndef ALUMNOS_H
#define ALUMNOS_H


class alumnos
#define NUMEROALUMNOS 5
#define NUMEROMATERIAS 5
#define NUMERONOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAX_LONGITUD_CADENA 100
{
    public:
void LlamarCiclo();
void InicializarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1]);
void LlenarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1]);
float imprimirMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1]);
int busquedaAleatoriaDeNotas(int minimo, int maximo);

        alumnos();
        virtual ~alumnos();

    protected:

    private:
};

#endif // ALUMNOS_H
