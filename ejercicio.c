#include <stdio.h>
#include <conio.h>

/*Defino la siguiente esctructura
struct producto
{
char codigo [25];
char nombreProductoProducto [50];
char descProducto [50];
int cantidad;
float precioCompra;
};

Esta estructura tiene 5 atributos
Construir un programa que implemente un menu de opciones, van a tener tres opiones
1) Ingresar datos

En la opcion uno debe ingresar los datos que se da en la estructura 
Esos datos se van a guardar en un archivo plano -> A01 Arroz -> sanCarlos -> 100 -> 2.50
						-> A02 Azucar -> sanCarlos -> 150 -> 2.25

2) Mostrar datos 
Leer el archivo y mostrar los datos en pantalla

A01 Arroz  sanCarlos  100  2.50
A02 Azucar  sanCarlos  150  2.25

3) Salir del programa.*/


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
        printf("OPCIONES\n");
        printf("1) INGRESAR LOS DATOS DE PRODUCTO\n");
        printf("2) MOSTRAR LOS DATOS GUARDADOS\n");
        printf("3) CERRAR EL PROGRAMA\n");
        printf("ESCRIBA EL NUMERO DE LA OPCION: ");
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
                printf("Datos guardados:\n");
                while (fscanf(archivo, "%s %s %s %d %f", p.codigo, p.nombre_producto, p.desc_producto, &p.cantidad, &p.precio_compra) != EOF) {
                    printf("%s %s %s %d %.2f\n", p.codigo, p.nombre_producto, p.desc_producto, p.cantidad, p.precio_compra);
                }
                fclose(archivo);
                break;
            
            case 3:
                printf("FIN DEL PROGRAMA\n");
                break;
            default:
                printf("ERROR\n");
        }
    } while (opcion != 3);

    return 0;
}