#include <stdio.h>
/**
 * main - Entry Point
 * Description - Combination of two two digits
 * Return: 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			if (i != j)/* check repetition */
			{
				putchar((i / 10) + '0');/* I used / and %*/
				putchar((i % 10) + '0');/* to extract the*/
				putchar(' ');/*tens and units digits of*/
				putchar((j / 10) + '0');/* i and j */
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
