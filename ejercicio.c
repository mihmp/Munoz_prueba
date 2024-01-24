#include <stdio.h>
#include <conio.h>

struct producto
{
    char nombre_Producto [50];
    char codigo [25];
    char desc_Producto [50];
    int cantidad;
    int precio_Compra
};


int main(int argc, char const *argv[])
{
    int opcion;
    FILE *doc;
    struct producto p;
    
    do {
        printf("MENU\n");
        printf("1) Ingresar datos\n");
        printf("2) Mostrar los datos ingresados\n");
        printf("3) Salir del programa\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
    return 0;
}
