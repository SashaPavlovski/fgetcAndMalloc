
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable: 4996)


void fun_1()
{
	char* fileName = "file-1.txt";
	FILE* f = fopen(fileName, "w");
	for (int i = 0; i < 10; i++)
	{
	fputc('*', f);
	fputc('\n', f);
	}
	fclose(f);
}

void fun_2()
{
	char* fileName = "file-2.txt";
	FILE* f = fopen(fileName, "w");

	for (int i = 0; i < 10; i++)
	{
		fputc('\n', f);
		for (int i = 0; i < 10; i++)
		{
			fputc('a', f);
		}
	}
	fclose(f);
}



void fun_3(int numloop)
{
	scanf("%d",&numloop);

	char* fileName = "file-3.txt";
	FILE* f = fopen(fileName, "w");

	for (int i = 0; i < numloop; i++)
	{
		fputc('\n',f);
		for (int i = 0; i < 50; i++)
		{
			fputc('*',f);
		}
	}
	fclose(f);
}




void fun_4(int num, char word[100])
{
	scanf("%d", num);
	fgets(word);

	int lenstr = strlen(word);
	char* fileName = "file-4.txt";
	FILE* f = fopen(fileName, "w");

	for (int i = 0; i < num; i++)
	{
		fputc('\n', f);
		for (int i = 0; i < lenstr; i++)
		{
			fputc (word[i], f);
		}
	}
	fclose(f);
}









int main()
{
	fun_1();
	fun_2();
	fun_3(1);
	fun_4(2, "aaa");
	return 0;
}