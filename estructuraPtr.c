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

int menu() {
    int opcion;
    printf("\nMenú\n");
	printf("1.- Leer datos\n");
    printf("2.- mostrar datos\n");
    printf("3.- Salir\n");
    scanf("%d", &opcion);

    return opcion;
}


int main(void) {
    struct Punto punto[10]; // Declaración de un arreglo de estructuras
    int opcion;
    srand(time(NULL));

    do {
        // Mandar a traer a menu para desplegar el menú y que el usuario elija una opción
        opcion = menu();
        switch (opcion) {
			case 1:
				break;
            case 2:
                break;
            case 3:
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 3);

    return 0;
}

void ingresarDatos(struct Punto *ptr, int n) {
    for(int i = 0; i < n; i++) {
        ptr[i].x = rand() % 9 + 1;
        ptr[i].y = rand() % 9 + 1;
    }
}