/**
 * Una estructura en C es un TDA (Tipo de Dato Abstracto) que permite agrupar diferentes tipos de datos bajo un mismo nombre.
 * Estructura de un programa en C
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct Punto {
    int x, y;
};

int main(void) {
    struct Punto punto[5]; // Declaración de un arreglo de estructuras

    srand(time(NULL));

    for(int i = 0; i < 5; i++) {
        punto[i].x = rand() % 9 + 1;
        punto[i].y = rand() % 9 + 1;
    }

    for(int i = 0; i < 5; i++) {
        printf("Punto %d: (%d, %d)\n", i + 1, punto[i].x, punto[i].y); // Imprimir los puntos
    }

    //printf("Que punto de quieres sacar la distancia entre ellos? (1-5) ");
    //int p1, p2;
    //scanf("%d %d", &p1, &p2);
    // Calcular la distancia entre los puntos seleccionados
    /*if(p1 < 1 || p1 > 5 || p2 < 1 || p2 > 5) {
        printf("Puntos inválidos. Por favor, ingresa números entre 1 y 5.\n");
        return 1;
    } else {
        double dx = punto[p2].x - punto[p1].x;
        double dy = punto[p2].y - punto[p1].y;
        double distancia = sqrt((dx * dx) + (dy * dy));
        printf("La distancia entre el punto %d y el punto %d es: %.2f\n", p1, p2, distancia);
    }*/
   for(int i = 0; i < 4; i++) {
        for(int j = i + 1; j < 5; j++) {
            double dx = punto[j].x - punto[i].x;
            double dy = punto[j].y - punto[i].y;
            double distancia = sqrt((dx * dx) + (dy * dy));
            printf("La distancia entre el punto %d y el punto %d es: %.2f\n", i + 1, j + 1, distancia);
        }
    }

    return 0;
}