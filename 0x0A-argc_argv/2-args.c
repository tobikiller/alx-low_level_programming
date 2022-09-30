#include <stdio.h>

/**
*main - print out number character of arguments
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/

int main(int argc, char *argv[])
{

	int countArg;

	for (countArg = 0; countArg < argc; countArg++)
	{
	printf("%s\n", argv[countArg]);
	}
	return (0);
}
