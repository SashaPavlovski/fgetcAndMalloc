#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable: 4996)


void fun_5()
{
	char str[100] = { 0 };
	char* a = str;

	FILE* f = fopen("C:\\Users\\User\\source\\repos\\lesson two with hiam\\lesson two with hiam\\q4.txt", "r");

	char ch = 0;
	char achar = 0;



	if (!f)
	{
		exit(1);
	}
	while (ch != EOF)
	{
		ch = fgetc(f);
		if (ch == 'i')
		{
			*a = achar;
			int var = atoi(str);
			int* number1 = malloc(var * sizeof(int));
			int* number11 = number1;
			printf("Enter %d numbers\n", var);
			for (int i = 0; i < var; i++)
			{
				scanf("%d", number1);
				number1++;
			}
			free(number11);
			*a = ' ';
		}
		else if (ch == 'c')
		{
			*a = achar;
			int var = atoi(str);
			char* number = malloc(var * sizeof(char));
			char* number1 = number;
			printf("Enter %d numbers\n", var);
			for (int i = 0; i < var; i++)
			{
				scanf("%d", &number);
				number++;

			}
			free(number1);
			printf("%c", ch);
			*a = ' ';

		}
		achar = ch;
	}
	fclose(f);
}


main_1()
{
	fun_5();
	return 0;
}




