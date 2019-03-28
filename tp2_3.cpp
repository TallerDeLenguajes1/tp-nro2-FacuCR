#include <stdio.h>
#include <stdlib.h>
#define N 15

void Cargar_Matriz(int *);
void Pares_Matriz(int *);
void Vector_Dinamico(int *, int *);

int main()
{

	srand(time(NULL));
	int f, c, DIM2 = 5 + rand() % 15; //asigno un numero aletorio entr 5 y 15
	int *ptr;
	ptr=(int*)malloc(N*DIM2*sizeof(int));

	Cargar_Matriz(ptr);

	for (f = 0; f < N; f++)
	{
		printf("%d", ptr[f]);
		printf("\n");
	}
	Pares_Matriz(ptr);

	//------------------------------------
	int *vec;
	Vector_Dinamico(ptr, vec);

	return 0;
}

void Cargar_Matriz(int *matriz)
{
	for (int i = 0; i < N; i++)
	{
		matriz[i] = 100 + rand() % 999;
	}
}

void Pares_Matriz(int *matriz)
{
	int cont = 0;
	for (int i = 0; i < N; i++)
	{
		if((matriz[i] % 2) == 0) //pregunto si es el resto es igual a 0, si lo es ejecuta
		{
			cont++;
		}
	}
	printf("-----------------------------------------------\n");
	printf("La cantidad de numeros pares son: %d\n", cont);
}

void Vector_Dinamico(int *matriz, int *vector)
{
	int cont = 0;
	for (int i = 0; i < N; i++) //cuento la cantidad de numeros pares
	{
		if((matriz[i] % 2) == 0)
		{
			cont++;
		}
	}
	vector = (int *) malloc(cont*sizeof(int)); //asigno la memoria al vector

	for (int i = 0; i < N; i++) //cargo el vector con los numeros pares
	{
		if((matriz[i] % 2) == 0)
		{
			vector[i] = matriz[i];
		}
	}

	for (int j = 0; j < cont; j++) // muestro
	{
		printf("%d", vector[j]);
		printf("\n");
	}
}