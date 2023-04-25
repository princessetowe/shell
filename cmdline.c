#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * @ac: argument count
 * @av: argument vector
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	int a;
	int p = 0;
	char str[500] = " ";

	while (av[p])
	{
		printf("%s $ ", av[p]);
		fgets(str, 500,  stdin);
		for (int a = 0; str[a] != '\0'; ++a)
		{
			if (str[a] == '|' || str[a] ==';' || str[a] ==':'
					|| str[a] =='>' || str[a] =='%' || str[a] =='~')
			{
				printf("Forbidden Symbol %c used \n", str[a]);
			}
			else
				ac++;
		}
	}
	printf("\n");
	return (0);
}
