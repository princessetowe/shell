#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - check code
 * @ac: argument count
 * @av: argumnt vector
 */
int main(int ac, char **av)
{
	char str[500] = " ";
	char str1[] = "exit";
	int a = 0;
	int c;

	while (av[a])
	{
		printf("%s$ ", av[a]);
		fgets(str, 5, stdin);
		c = strcmp(str, str1);

		if (c == 0)
		{
			exit(0);
		}
	}
}
