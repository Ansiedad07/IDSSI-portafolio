/**
 * Memoria Dinámica de 5 elementos con Menú
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu() {
    int opcion;
    printf("\nMenú\n");
    printf("1.- Ingresar datos\n");
    printf("2.- Mostrar datos\n");
    printf("3.- Salir\n");
    scanf("%d", &opcion);
    return opcion;
}
int main(void) {
    int *ptr = NULL; // Declaración de un apuntador a entero
    int n = 5; // Cantidad de enteros a asignar
    int opcion;

	srand(time(NULL));

    // Asignar la cantidad de memoria para asignar en bytes
    ptr = (int *)malloc(sizeof(int) * n);

    do {
		// Mandar a traer a menu para desplegar el menú y que el usuario elija una opción
        opcion = menu();
        switch (opcion) {
            case 1:
                printf("Datos registrados\n");
    			for (int i = 0; i < n; ++i) {
					*(ptr + i) = rand() % 10 + 1;
    			}
                break;
            case 2:
                printf("Valores almacenados en la memoria dinámica:\n");
                for (int i = 0; i < n; ++i) {
                    printf("Valor %d: %d\n", i + 1, ptr[i]);
                }
                break;
            case 3:
                break;
            default:
                printf("Opción no válida.\n");
        }
    } while (opcion != 3);

    // Liberar la memoria asignada
    free(ptr);
    return 0;
}