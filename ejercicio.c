#include <stdio.h>

struct producto {
    char codigo[25];
    char nombre_producto[50];
    char desc_producto[50];
    int cantidad;
    float precio_compra;
};

int main() {
    int opcion;
    FILE *archivo;
    struct producto p;

    do {
        printf("Menu de Opciones\n");
        printf("1) Ingresar datos\n");
        printf("2) Mostrar datos\n");
        printf("3) Salir del programa\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                archivo = fopen("productos.txt", "a");
                printf("Ingrese el codigo del producto, el nombre, la descripcion, la cantidad y el precio de compra: ");
                scanf("%s %s %s %d %f", p.codigo, p.nombre_producto, p.desc_producto, &p.cantidad, &p.precio_compra);
                fprintf(archivo, "%s %s %s %d %.2f\n", p.codigo, p.nombre_producto, p.desc_producto, p.cantidad, p.precio_compra);
                fclose(archivo);
                break;
            case 2:
                archivo = fopen("productos.txt", "r");
                printf("Datos almacenados:\n");
                while (fscanf(archivo, "%s %s %s %d %f", p.codigo, p.nombre_producto, p.desc_producto, &p.cantidad, &p.precio_compra) != EOF) {
                    printf("%s %s %s %d %.2f\n", p.codigo, p.nombre_producto, p.desc_producto, p.cantidad, p.precio_compra);
                }
                fclose(archivo);
                break;
