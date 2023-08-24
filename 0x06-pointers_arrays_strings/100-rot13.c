#include "main.h"
/**
 * rot13 - Encode a string using rot13
 * @s: string
 * Return: string
 */
char *rot13(char *s)
{
	int x, y;

	char nana[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char nanab[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		for (y = 0; nana[y] != '\0' ; y++)
		{
			if (s[x] == nana[y])
			{
				s[x] = nanab[y];
				break;
			}
		}
	}
	return (s);
}
