#include <stdio.h>
/**
 *main - entry point
 *Return: Always (0) success
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	int m = 65;

	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
