#include <stdio.h>
#include <stdlib.h>

void main() {
    int tamanio, valor = 0;
    //Asignación del tamaño al vector y su creación
    printf("Ingrese el tamaño del vector\n");
    scanf("%d", &tamanio);
    if (tamanio < 0 || tamanio == 0) {
        printf("Tamanio del vector invalido\n");
    } else {
        int vec[tamanio - 1], i, j;
        //Llenado del vector
        for (i = 0; i < tamanio; i++) {
            printf("Ingrese un valor en la posición %d\n", i + 1);
            scanf("%d", &vec[i]);
            for (j = 0; j < i; j++) {
                while (vec[j] == vec[i]) {
                    printf("Valor ya registrado, Ingrese un valor en la posición %d\n", i + 1);
                    scanf("%d", &vec[i]);
                }
            }
        }
        //Imprime el vector
        printf("\nEl vector desordenado es:\n ");
        for (i = 0; i < tamanio; i++) {
            printf("%d  ", vec[i]);
        }

        printf("\n");
        //Ordena el vector de mayor a menor
        int mayorNum;
        for (i = 0; i < tamanio; i++) {
            for (j = 0; j < 5; j++) {
                if (vec[j] < vec[i]) {
                    mayorNum = vec[i];
                    vec[i] = vec[j];
                    vec[j] = mayorNum;
                }
            }
        }
        //Imprime el vector
        printf("\nEl vector ordenado de forma descendente es:\n ");
        for (i = 0; i < tamanio; i++) {
            printf("%d  ", vec[i]);
        }
        
        
        //La media
        printf("\n\n ");
        float suma=0;
 for (i = 0; i < tamanio; i++) {
     suma=suma+vec[i];
        }
                printf("\n");

        printf("La media es: %f",suma/tamanio);
    
                printf("\nEl mayor valor de la matriz  es: %d y el menor de ella es: %d\n",vec[0],vec[tamanio-1]);

    }
}
