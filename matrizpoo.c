#include <stdio.h>

void capturar(int matriz[3][3]) {
    printf("Ingresa los elementos de la matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void mostrar(int matriz[3][3]) {
    printf("Matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void invertiruno(int matriz[3][3]) {
    int ayudaaa[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            ayudaaa[i][j] = matriz[2 - i][2 - j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = ayudaaa[i][j];
        }
    }
}

void invertirdos(int matriz[3][3]) {
     int ayudita;
    for (int i = 0; i < 2; i++) {
        for (int j = 1; j < 3; j++) {
            ayudita=matriz[i][j];
            matriz[i][j]=matriz[j][i];
            matriz[j][i]=ayudita;
        }
    }
}

void buscar(int matriz[3][3], int num) {
    int encontrado = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == num) {
                printf("El elemento %d se encuentra en la posicion [%d][%d]\n", num, i, j);
                encontrado = 1;
            }
        }
    }
    if (!encontrado) {
        printf("El elemento %d no se encontro en la matriz.\n", num);
    }
}

int main() {
    int matriz[3][3];
    int opcion, num;

    do {
        printf("\nMenu:\n");
        printf("1. Capturar matriz\n");
        printf("2. Mostrar matriz\n");
        printf("3. Invertir matriz\n");
        printf("4. Invertir filas por columnas\n");
        printf("5. Buscar elemento\n");
        printf("6. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                capturar(matriz);
                break;
            case 2:
                printf("\nLa matriz es: \n");
                mostrar(matriz);
                break;
            case 3:
                invertiruno(matriz);
                printf("\nLa matriz se ha invertido por completo.\n");
                sleep(1);
                break;
            case 4:
                invertirdos(matriz);
                printf("\nLa matriz ha invertido sus filas por sus columnas.\n");
                sleep(1);
                break;
            case 5:
                printf("\n\tIngresa el numero a buscar: ");
                scanf("%d", &num);
                buscar(matriz, num);
                break;
            case 6:
                printf("\tSaliendo del programa.\n");
                break;
            default:
                printf("\tOpcion no valida.\n");
        }
    } while (opcion != 6);
    printf("\n\n\tGracias por usar el programa!\n\n");
    sleep(2);
    return 0;
}
