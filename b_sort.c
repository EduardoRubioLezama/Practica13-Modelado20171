#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "b_sort.h"

void swap(void * a, void * b, size_t size)
{
	void * tmp = malloc(size);
	memcpy(tmp,a,size);
	memcpy(a,b,size);
	memcpy(b,tmp,size);
	free(tmp);
}

void bsort(void* base, size_t num, size_t size,int (*compar)(const void*, const void*))
{

	//contador del for
	int j =1;
	int i = 0;
	//tamaño para saber hasta donde debemos ordenar el arreglo
	int tam = num;
	while(tam>0)
	{ 
		for (j = 0; j < tam-1; j++)
		{
			char * n1 = (char*)base + size*i;
			char * n2 = (char*)base + size*j;
			if(compar(n1,n2)>0)
			{
				swap(n1,n2,size);
			}
		}
		tam --;
		i++;
	}
}


