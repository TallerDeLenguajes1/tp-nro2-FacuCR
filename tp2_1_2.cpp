#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 5

int main()
{
	int f, c;
	double mt[N][M];
	double *ptr;
	ptr = mt[N];

	for (f = 0; f < N; f++)
	{
		for (c = 0; c < M; c++)
		{
			printf("%lf", ptr[c]);
		}
		printf("\n");
	}

	return 0;
}