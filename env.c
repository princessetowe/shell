#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * main - check code
 * @ac: argument count
 * @av: argument vector
 * @env: shell environment
 */
int main(int ac, char **av, char **env)
{
	unsigned int a;
	a = 0;
	int b = 0;
	int c, d;
	char str[4] = " ";
	char str1[] = "env";

	printf("%s$ ",av[b]);
	fgets(str, 4, stdin);
	c = strcmp(str, str1);
	if (c == 0)
	{
		while (env[a])
		{
			printf("%s\n", env[a]);
			a++;
		}
		for (d = 0; d < ac; d ++)
		{
			printf("%s$ ", av[b]);
			scanf("%s", str);
			ac++;
		}
	}
}
