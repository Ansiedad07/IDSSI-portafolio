/**
 * Una estructura en C es un TDA (Tipo de Dato Abstracto) que permite agrupar diferentes tipos de datos bajo un mismo nombre.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct Punto {
    int x, y;
};

void ingresarDatos(struct Punto *ptr);
void mostrarDatos(struct Punto *ptr);

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
    struct Punto punto[10], *ptr; // Declaración de un arreglo de estructuras
	// # punto por si solo es la dirección de memoria del primer elemento del arreglo, por lo que se puede usar como un apuntador a la estructura
	ptr = punto; // Asignar la dirección de memoria del primer elemento del arreglo a ptr
    int opcion;
    int n = 0;
    srand(time(NULL));

    do {
        // Mandar a traer a menu para desplegar el menú y que el usuario elija una opción
        opcion = menu();
        switch (opcion) {
			case 1:
                ingresarDatos(punto); // punto es la dirección de memoria del primer elemento del arreglo, por lo que se puede usar como un apuntador a la estructura
				break;
            case 2:
                mostrarDatos(punto);
                break;
            case 3:
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 3);

    return 0;
}

void ingresarDatos(struct Punto *ptr) { // Tipo de dato de la variable ptr es un apuntador a una estructura Punto
    for(int i = 0; i < 10; i++) {
        ptr[i].x = rand() % 9 + 1;
        ptr[i].y = rand() % 9 + 1;
    }
}

void mostrarDatos(struct Punto *ptr) {
    for(int i = 0; i < 10	; i++) {
        printf("Punto %d: (%d, %d)\n", i, ptr[i].x, ptr[i].y);
    }

	for(int i = 0; i < 10; i++) {
		for(int j = i + 1; j < 10; j++) {
			double dx = ptr[j].x - ptr[i].x;
			double dy = ptr[j].y - ptr[i].y;
			double distancia = sqrt((dx * dx) + (dy * dy));
			printf("La distancia entre el punto %d y el punto %d es: %.2f\n", i, j, distancia);
		}
	}
}