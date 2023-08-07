#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *i;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	i = malloc(sizeof(char) * (a + b + 1));

	if (i == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		i[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		i[a] = s1[b];
		a++, b++;
	}
	i[a] = '\0';
	return (i);
}
