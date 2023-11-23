#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void cargar(char articulos[40][31],int cantidad,float precio);
void imprimir(char articulos[40][31]);
int main()
{
    int i, j, a, b, c, d, e, f, n;
    int productos[n];
    char nombre[n][31];
    char nombres[n][31];
    int codigo;
    int cantidad;
    float precio;
    int opcion;
    char seguir[3];
    do
    {
        printf("Bienvenido al sistema de inventario\n");
        printf("Opciones\n");
        printf("1. Ingresar un producto nuevo\n");
        printf("2. Editar un producto\n");
        printf("3. Eliminar un producto\n");
        printf("4. Ver lista de productos\n");
        printf("Ingrese la opción: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
        {
          cargar(nombre,cantidad,precio);
          imprimir(nombre);
          getchar();

            break;}
        case 2:
            printf("Ingrese el codigo del producto que desea modificar:\n");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("introduce el nombre del producto");
                printf("Ingrese la cantidad del producto : ");
                scanf("%d", &cantidad);
                printf("Ingrese el precio del producto : ");
                scanf("%f", &precio);
                printf("Desea realizar alguna otra accion?");
                scanf("%s", seguir);
            }
            break;
          case 3:
            printf("Introduce el codigo del producto que deseas eliminar");
            scanf("%d", &codigo);

          case 4:
            printf("-------------------------INVENTARIO--------------------------\n");
              printf("Nombre.\t\t\t Codigo.\t\t Cantidad.\t\t\t Precio.\t\n");
        default:
            break;

          }
    printf("Desea realizar alguna otra accion?");
    scanf("%s", seguir);}
    while (strcmp(seguir, "si") == 0 || strcmp(seguir, "SI") == 0) ;

        printf("Gracias por usar el sistema de inventario de ABET :)");

}    


void cargar(char articulos[40][31],int cantidad,float precio)
{
    int d;
    int o;
    int m;
  float i;
    
    printf("Ingrese el numero de  productos que desea ingresar:\n");
    scanf("%d", &o);
    getchar();
    for(d=0;d<o;d++)
    {
      
        printf("Ingrese el nombre del articulo:");
        fgets(articulos[d],31,stdin);
        printf("Ingrese la cantidad del producto : ");
        scanf("%d", &m);
        printf("Ingrese el precio del producto :");
        scanf("%f", &i);
        printf("%s\n",articulos[d]);
        getchar();
    }
}

void imprimir(char articulos[40][31])
{
    int d;
    int o;
    printf("Ingrese el numero de cantidad de productos ingresados:\n");
    scanf("%d", &o);
  printf("-------------------------INVENTARIO--------------------------\n");
    printf("Nombre.\t\t\t Codigo.\t\t Cantidad.\t\t\t Precio.\t\n");
    for(d=0;d<o;d++)
    {
        printf("%s,\n",articulos[d]);
    }
}
