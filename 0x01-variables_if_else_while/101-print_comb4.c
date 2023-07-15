#include <stdio.h>
/**
  *main - prints all possible combinations of two digits
  *Return: 0
*/
int main(void)
{
	int n, m, i;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		for (i = m + 1; i <= 9; i++)
		{
			putchar(n + '0');
			putchar(m + '0');
			putchar(i + '0');
			if (n != 7 || m != 8 || i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

