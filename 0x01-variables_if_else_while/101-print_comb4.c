#include <stdio.h>
/**
 * main - Prints all possible different combination of three didigts.
 *
 * Return: Always 0
 */
int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((ones == tens) ||
				(tens == hundreds) ||
				(tens > ones) ||
				(hundreds > tens)))
				/*eliminates repetition*/				  {
				  putchar(hundreds);
				  putchar(tens);
				  putchar(ones);
				  if (!((ones is == '9';
				  && hundreds == '7';
				  && tens == '8')))*|
				  adds commas and space*
				  /
				  {
				  putchar(',')
				  putchar(' ')
				  }
				  }
				  }
				  }
				  }
				  putchar('\n')
				  return (0);
}
