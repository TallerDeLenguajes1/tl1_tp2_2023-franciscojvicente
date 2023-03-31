#include <stdio.h>
#include <stdlib.h>

#define TAMA 5

struct
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
}typedef PC;

void mostrar (PC compu[]);
void masVieja (PC compu[]);
void masRapida (PC compu[]);

int main () {

    PC compu[TAMA];

    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    for (int i = 0; i < TAMA; i++)
    {
        compu[i].velocidad = rand () % 3 + 1;
        compu[i].anio = rand () % 9 + 2015;
        compu[i].cantidad = rand () % 8 + 1;
        compu[i].tipo_cpu = 1;
    }
    
    mostrar(compu);
    masVieja(compu);
    masRapida(compu);

    return 0;
}

void mostrar (PC compu[]) {
    int i;
    for (int i = 0; i < TAMA; i++)
    {
        printf("La velocidad de la computadora %d es: %d GHz.",i, compu[i].velocidad);
        printf("El anio de la computadora %d es: %d",i, compu[i].anio);
        printf("La cantidad de disponibles de la computadora %d es: %d", i, compu[i].cantidad);
        printf("El tipo es CPU de la computadora %d es: %c", i,);
    }
}

void masVieja (PC compu[]) {
    int i;
    int antigua = 0;
    int antiguavel = 0;
    for (int i = 0; i < TAMA; i++)
    {
        if (compu[i].anio > antigua)
        {
            antigua = compu[i].anio;
            antiguavel = compu[i].velocidad;
            // falta cpu
        }
    }
    printf("La computadora mas antigua data del anio %d cuya velocidad es de %d GHz y su tipo de CPU es %c", antigua, antiguavel);    
}

void masRapida (PC compu[]) {
    int i;
    int velocidad = 0;
    int antigua = 0;
    for (int i = 0; i < TAMA; i++)
    {
        if (compu[i].velocidad > velocidad)
        {
            velocidad = compu[i].velocidad;
            antigua = compu[i].anio;
            // falta cpu
        }
    }
    printf("La computadora mas rapidad es de %d GHz,, data del anio %d y su tipo de CPU es %c", velocidad, antigua);    
}