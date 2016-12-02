#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "arreglos_random.h"



int* arreglo_int(size_t num, int min, int max)
{
	int * arreglo = malloc(num*sizeof(int));
	int r;
	srand(time(NULL));
	int i = 0;
	for (i = 0; i < num; i++) 
	{
		r = rand()%((max + 1 - min))+min;
		arreglo[i] = r;
	}
	return arreglo;
}


double* arreglo_double(size_t num, double min, double max)
{
	double * arreglo = malloc(num*sizeof(double));
	srand((unsigned)time(NULL));
	double range = (max - min); 
	double div = RAND_MAX / range;
	int i = 0;
	for (i = 0; i < num; i++)
	{
		arreglo[i] = min + (rand() / div);
	}
	return arreglo;
}

int main()
{
	return 0;
}
