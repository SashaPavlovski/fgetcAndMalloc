

#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable: 4996)
int fum(int num)
{
	int* poi;
	poi = malloc(4 * sizeof(int));
	for(int i = 0; i < 4; i++)
	{
		*poi = num;
		 printf("%d ",*poi);
	     poi++;
		 num++;
	}
	return poi;
}


int fum_1(int* num)
{
	int* poi;
	
	poi = malloc(5 * sizeof(int));
	int* original = poi;
    for(int i = 0; i < 5; i++)
		{
		*poi = num;
		printf("%p\n",poi);
		poi++;
		num++;
	    }

	return original;
}



int printNum(int* numberList)
{
	printf("%d\n", numberList);
}







int main()
{

	fum(3);

	fum_1(1);
	printNum(fum_1(1));

	return 0;
    }











