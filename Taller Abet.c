#include <stdio.h>
#include <string.h>

int main()
{
  int i, n;
  char codigos[3][10];
  float precios[3];
  char descripciones[3][50];
  int opcion;
  char seguir;

  do
  {
    printf("Opciones\n");
    printf("1. Ingresar un producto nuevo\n");
    printf("2. Editar un producto\n");
    printf("3. Eliminar un producto\n");
    printf("Ingrese la opción: ");
    scanf("%d", &opcion);
    getchar();
    switch (opcion)
    {
    case 1:
      printf("Ingresar productos\n");
      printf("Ingrese el numero de productos a ingresar: \n");
      scanf("%d", &n);
      for (i = 0; i < n; i++)
      {
        printf("Ingrese el código del producto %d: ", i + 1);
        scanf("%s", codigos[i]);

        printf("Ingrese el precio del producto %d: ", i + 1);
        scanf("%f", &precios[i]);

        printf("Ingrese el nombre del producto %d: ", i + 1);
        scanf("%s", descripciones[i]);
        getchar();
      }

      printf("Datos de productos ingresados:\n");
      for (i = 0; i < n; i++)
      {
        printf("Producto %d:\n", i + 1);
        printf("Código: %s\n", codigos[i]);
        printf("Precio: %.2f\n", precios[i]);
        printf("Nombre: %s\n", descripciones[i]);
        printf("\n");
      }
      break;

    case 2:

      char codigoModificar[10];
      printf("Ingrese el código del producto que desea modificar: ");
      scanf("%s", codigoModificar);

      for (i = 0; i < 3; i++)
      {
        if (strcmp(codigos[i], codigoModificar) == 0)
        {
          printf("Ingrese el nuevo precio para el producto %s: ", codigoModificar);
          scanf("%f", &precios[i]);

          printf("Datos del producto actualizados:\n");
          printf("Código: %s\n", codigos[i]);
          printf("Nuevo Precio: %.2f\n", precios[i]);
          printf("Nombre: %s\n", descripciones[i]);

          break;
        }
      }

      if (i == 3)
      {

        printf("Producto con código %s no encontrado.\n", codigoModificar);
      }
      break;

    case 3:
  printf("Eliminar productos\n");
  char codigoeliminar[10];
  printf("Ingrese el código del producto que desea eliminar: ");
  scanf("%s", codigoeliminar);

  for (i = 0; i < 3; i++)
  {
    if (strcmp(codigos[i], codigoeliminar) == 0)
    {
      printf("Producto eliminado correctamente:\n");
      printf("Código: %s\n", codigos[i]);
      printf("Precio: %.2f\n", precios[i]);
      printf("Nombre: %s\n", descripciones[i]);

      // Eliminar el producto moviendo los elementos en el arreglo
      for (int j = i; j < n - 1; j++)
      {
        strcpy(codigos[j], codigos[j + 1]);
        precios[j] = precios[j + 1];
        strcpy(descripciones[j], descripciones[j + 1]);
      }

      // Decrementar el contador de productos
      n--;

      break;
    }
  }

  if (i == 3)
  {
    printf("Producto con código %s no encontrado.\n", codigoeliminar);
  }
  break;


    default:
      printf("Opción no válida\n");
    }

    printf("¿Desea continuar? (y/n): ");
    scanf(" %c", &seguir);
  } while (seguir == 'y' || seguir == 'Y');

  for (i = 0; i < n; i++)
  {
    printf("Producto %d:\n", i + 1);
    printf("Código: %s\n", codigos[i]);
    printf("Precio: %.2f\n", precios[i]);
    printf("Descripción: %s\n", descripciones[i]);
    printf("\n");
  }

  return 0;
}