/**
 * Memoria Dinámica de 5 elementos con Menú y todos los datos mediante funciones
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ingresarDatos(int *ptr);
void mostrarDatos(int *ptr);

int menu() {
    int opcion;
    printf("\nMenú\n");
    printf("1. Ingresar datos\n");
    printf("2. Mostrar datos\n");
    printf("3. Salir\n");
    scanf("%d", &opcion);
    return opcion;
}
int main(void) {
    int *ptr = NULL; // Declaración de un apuntador a entero
    int opcion;
    srand(time(NULL));

    // Asignar la cantidad de memoria para asignar en bytes
    ptr = (int *)malloc(sizeof(int) * 5);

    do {
        // Mandar a traer a menu para desplegar el menú y que el usuario elija una opción
        opcion = menu();
        switch (opcion) {
            case 1:
                ingresarDatos(ptr);
                break;
            case 2:
                mostrarDatos(ptr);
                break;
            case 3:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 3);

    // Liberar la memoria asignada
    free(ptr);
    return 0;
}

void ingresarDatos(int *ptr) {
    printf("\nDatos asignados\n");
    for (int i = 0; i < 5; ++i) {
        *(ptr + i) = rand() % 10 + 1;
    }
}

void mostrarDatos(int *ptr) {
    printf("\nValores almacenados en la memoria dinámica:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Valor %d: %d\n", i + 1, ptr[i]);
    }
}