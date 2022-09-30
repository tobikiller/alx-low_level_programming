#include <stdio.h>
#include <stdlib.h>

/**
*main - print out multiple of two numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/

int main(int argc, char *argv[])
{

	int multiple;

	if (argc == 3)
	{
	multiple = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multiple);
	return (0);
	}
	else
	printf("Error\n");
	return (1);
}
