#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Buff[5] = {5, 15, 30, 10, 35};
	int *p;
	int i, tama, tamp;
	p = Buff;
	printf("Mediante notacion subindexada:\n");
	for (i = 0; i < 5; i++)	{
		printf("%d\n", Buff[i]);
	}

	printf("Mediante aritmetica de punteros:\n");
	for (i = 0; i < 5; i++)	{
		printf("%d\n", p[i]);
	}

	printf("Mediante el arreglo con aritmeticas de punteros:\n");
	for (i = 0; i < 5; i++)	{
		printf("%d\n", *(Buff + i));
	}

	printf("Direccion de memoria:\n");
	for (i = 0; i < 5; i++)	{
		printf("%d\n", Buff + i);
	}

	tama = sizeof(Buff);
	printf("Tamanio del arreglo: %d\n", tama);
	tamp = sizeof(p);
	printf("Tamanio del puntero: %d\n", tamp);

	return 0;
}