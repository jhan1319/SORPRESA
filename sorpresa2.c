#include <stdio.h>
#include <stdlib.h>

#define PERIODOS 2
#define MateriasPeriodos 2
#define CANTIDADCARRERAS 2

// 20/80
// Faltaron muchos acápites

struct estudiantes
{
   int matricula;
   char nombre[20];
   char apellido[20];
   int telefono;
   char carrera[10];
   int materias;
};

struct materia
{
   char clave[20];
   char nombre[20];
   int creditos;
   int horas;
   int horasp;
   char requisito[20];
};
typedef materia MAT;

struct carrera
{
   char clave[10];
   char nombre[20];
   char matper[PERIODOS][MateriasPeriodos]
   MAT agregar;
};

typedef struct carrera CARR;


typedef struct estudiantes ESTU;


void inscribir();
void carreras();
void materias();
void menu(int a);
int b;

int main()
{
   printf("BIENVENIDO! SELECCIONE UNA DE LAS OPCIONES DEL MENU:\n1.Inscribir estudiantes\n2. Agregar Carreras\n3. Agregar Materias\n4. Publicar calificaciones numéricas a un estudiante en una materia\n5. Borrar una calificación\n6. Calcular el índice acumulado de un estudiante\n7. Calcular la calificación promedio en una materia\n8. Calcular la calificación promedio de los estudiantes de una carrera\n9. La cantidad de horas prácticas por carrera\n10. SALIR.\n");
   scanf("%d", &b);
   menu(b);

    return 0;
}
void menu(int a)
{
   switch (a)
  {
case 1:
   inscribir();
case 2:
   carreras();
/*case 3:
   materias();
case 4:
   calificaciones();
case 5:
   borrar();
case 6:
   indice();
case 7:
   promedio();
case 8:
   promedioCarrera();
case 9:
   horas();
case 10:
   break;
   }*/
}
}

void inscribir()
{
   int i=0;

   ESTU datos[2];

   for(i=0; i<2 ; i++)
   {
      printf("Ingrese la matricula del estudiante (sin guion):\n");
      scanf("%d", &datos[i].matricula);
      printf("Ingrese el nombre del estudiante:\n");
      scanf("%s", datos[i].nombre);
      printf("Ingrese el apellido del estudiante:\n");
      scanf("%s", datos[i].apellido);
      printf("Ingrese el telefono del estudiante:\n");
      scanf("%d", &datos[i].telefono);
      printf("Ingrese la carrera del estudiante:\n");
      scanf("%s", datos[i].carrera);
      printf("Ingrese la cantidad de materias del estudiante:\n");
      scanf("%d", &datos[i].materias);
   }

}

void carreras()
{
   CARR datos[CANTIDADCARRERAS];
   int i=0, j=0, k=0;

   //lenar el arreglo bi de ceros:
   for(j=0; j<PERIODOS; j++)
    {
    for(k=0; k<1; k++)
    {
      datos[i].matper[j][k] = 0;
    }
    }
    //

   for(i=0 ; i<CANTIDADCARRERAS ; i++)
   {
      printf("Ingrese una nueva carrera universitaria:\n");
      scanf("%s", &datos[i].nombre);
      printf("Ingrese la clave de la carrera (%s):\n", datos[i].nombre);
      scanf("%s", &datos[i].clave);

      printf("\nA CONTINUACION INGRESE LA CANTIDAD DE MATERIAS POR PERIODO\n");

      for(j=0 ; j<PERIODOS; j++)
      {
      printf("PERIODO #%d:\n",j+1);
         for(k=0 ; k<1 ; k++)
         {
           printf("Ingrese la cantidad de materias de este periodo:");
           scanf("%d", &datos[i].matper[j][k]);
         }
      }


   }
   //DESMARCAR PARA MOSTRAR EL ARREGLO DE MATERIAS POR PERIODO//
   /*for(i=0 ; i<CANTIDADCARRERAS; i++)
   {
   for(j=0; j<PERIODOS; j++)
    {
    for(k=0; k<1; k++)
    {
      printf("%d\t", datos[0].matper[j][k]);
    }
      printf("\n\n");
    }
   }*/

}

void materias()
{

}












