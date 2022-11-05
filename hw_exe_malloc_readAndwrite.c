
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable: 4996)

void fun()
{
	FILE* f;
	f = fopen("C:\\Users\\User\\source\\repos\\lesson two with hiam\\lesson two with hiam\\q1.txt", "r");

	char ch = fgetc(f);
	int count = 0;



	if (!f)
	{
		printf("file connet be opened");
		exit(1);
	}
	while (ch != EOF)
	{
		ch = fgetc(f);

		count++;
	}
	fclose(f);
	printf("%d", count);
}


void fun_1()
{
	FILE* f;
	f = fopen("C:\\Users\\User\\source\\repos\\lesson two with hiam\\lesson two with hiam\\q1.txt", "r");

	char cha;
	int count = 0;



	if (!f)
	{
		printf("file connet be opened");
		exit(1);
	}
	cha = '0';
	while (cha != EOF)
	{
		cha = fgetc(f);
		if(cha == '*')
		{
		count++;
		}

	}
	fclose(f);
	printf("%d", count);
}


void fun_2()
{
	FILE* f = fopen("C:\\Users\\User\\source\\repos\\lesson two with hiam\\lesson two with hiam\\q3.txt","r");
	char ch = '0';
	int count = 1;

	if (!f)
	{
		printf("file connot be opened");
		exit(1);
	}
	
	while (ch != EOF)
	{
		ch = fgetc(f);
		if (ch == '\n')
		{
			count++;
		}
	}

	fclose(f);
	printf("%d", count);


}


void fun_3()
{
	FILE* f = fopen("C:\\Users\\User\\source\\repos\\lesson two with hiam\\lesson two with hiam\\q4.txt", "r");
	char ch = 0;
	if (!f)
	{
		exit(1);
	}
	while (ch != EOF)
	{
		ch = fgetc(f);
		printf("%c", ch);
	}
	fclose(f);
}


void fun_4()
{
	char str[100] = {0};
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
				scanf("%d",number1);
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
			printf("Enter %d numbers\n",var);
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




main()
{
	//fun();
	//fun_1();
	//fun_2();
	//fun_3();
	fun_4();
return 0;
}











