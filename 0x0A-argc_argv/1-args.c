#include <stdio.h>

/**
 * main - check the code
 * @argc : number of command arguments
 * @argv : array of pointers to the arguments typed from command line
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{

	int count = 0;

	while ((*argv != 0) && (count < argc))
		count++;
	printf("%d\n", count);
	return (0);
}
