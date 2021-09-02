#include <stdio.h>
/**
 *main-prints 1-100, multiples 0f 3 prints -fizz, of prints 5-buzz
 *
 *Return:void.
 */

int main(void)
{

	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k == 100)
		{
			printf("Buzz");
			break;
		}
		else if (k % 3 == 0 && k % 5 != 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (k % 5 == 0 && k % 3 != 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (k % 3 == 0 && k % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", k);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
