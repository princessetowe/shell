#include <stdio.h>
#include <string.h>
/**
 * main - check code
 * @ac: argument count
 * @av: argument vector
 * Return: Always 0 (success)
 */
int main(int ac, char **av)
{
	char str[1000] = " ";
	char *a = NULL;
	int b = 0;
	char *token;

	while (av[b])
	{
		printf("%s$ ", av[b]);
		fgets(str, 1000, stdin);
		ac++;

		for (token = strtok_r(str, " ", &a);
				token != NULL;
				token = strtok_r(NULL, " ", &a))
		{
			printf("%s\n", token);
		}
	}
	return (0);
}
