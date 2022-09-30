#include <stdio.h>

/**
*main - print out number commands
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%d", argc - 1);
	return (0);
}
